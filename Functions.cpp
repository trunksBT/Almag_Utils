#include "Utils/Functions.hpp"
#include <numeric>
#include <sstream>
#include <boost/tokenizer.hpp>
#include <Utils/TypeAliases.hpp>
#include <HDLC/HDLCFrame.hpp>

namespace
{
using tokenizer = boost::tokenizer<boost::char_separator<char>>;
constexpr const char* SPACE_AS_SEPARATOR = " ";
}

namespace funs
{
bool anyOf(const Strings& supportedCommands, const std::string& zeroArgOfUserInput)
{
   return std::any_of(supportedCommands.begin(), supportedCommands.end(),
    [&zeroArgOfUserInput](auto command){ return command == zeroArgOfUserInput; });
}

Strings lex(const std::string& inCommand, const char* separator)
{
   boost::char_separator<char> sep(separator);
   tokenizer tokens(inCommand, sep);
   Strings retVal(tokens.begin(), tokens.end());
   return retVal;
}

std::string join(const Strings& inChain)
{
   return std::accumulate(inChain.begin(), inChain.end(), std::string{});
}

Hexes merge(const Hex& flagStart, const Hexes& hdlcBody, const Hexes& sumCRC, const Hex& flagEnd)
{
   Hexes retVal;
   retVal.push_back(flagStart);

   for (const auto& it : hdlcBody)
      retVal.push_back(it);
   for (const auto& it : sumCRC)
      retVal.push_back(it);

   retVal.push_back(flagEnd);
   return retVal;
}
}

namespace convert
{
std::string toString(const Hex& value)
{
   std::stringstream stream;
   stream << std::hex << static_cast<int>(value) << SPACE_AS_SEPARATOR;
   return stream.str();
}  /// TODO remove the last space

std::string toString(const Hexes& value)
{
   std::stringstream stream;
   for (const auto& it : value)
      stream << toString(it);
   return stream.str();
}

std::string toString(const char* msg, Hex input)
{
   std::stringstream stream;
   stream << msg << std::hex << static_cast<int>(input);
   return stream.str();
}

std::string toString(const char* msg, const Hexes& input)
{
   std::stringstream stream;
   stream << msg;
   for (const auto& it : input)
      stream << std::hex << static_cast<int>(it) << " ";
   return stream.str();
}

std::string toString(const Strings& hexes, const char* separator)
{
   std::stringstream stream;
   stream << "{ " << separator;
   for (const auto& it : hexes)
      stream << it << separator;
   stream << " }";
   return stream.str();
}

std::string toString(std::queue<HDLCFrame>& inQueue)
{
   std::stringstream retVal;
   while (not inQueue.empty()){
      retVal << toString(inQueue.front().build());
      inQueue.pop();
   }
   return retVal.str();
}
}
