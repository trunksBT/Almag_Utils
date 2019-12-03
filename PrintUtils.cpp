#include "Utils/PrintUtils.hpp"
#include <sstream>
#include <Utils/Logger.hpp>

namespace
{
constexpr const char* SPACE_AS_SEPARATOR = " ";
}

namespace printUtils
{
void printHex(const char* msg, Hex input)
{
   LOG(debug) << msg << std::hex << static_cast<int>(input);
}

void printFrame(const char* msg, const Hexes& input)
{
   std::stringstream stream;
   stream << msg;
   for (const auto& it : input)
   {
      stream << std::hex << static_cast<int>(it) << " ";
   }
   LOG(debug) << stream.str();
}

std::string toString(const Hexes& value)
{
   std::stringstream stream;
   for (const auto& it : value)
   {
      stream << std::hex << static_cast<int>(it) << SPACE_AS_SEPARATOR;
   }
   return stream.str();
}  /// TODO remove the last space

void printStrings(const Strings& hexes)
{
   LOG(debug) << "{";
   for (const auto& it : hexes)
   {
      LOG(debug) << it;
   }
   LOG(debug) << "}";
}

}