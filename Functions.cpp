#include "Utils/Functions.hpp"
#include <algorithm>
#include <numeric>
#include <boost/algorithm/string/join.hpp>
#include <Utils/TypeAliases.hpp>
#include <boost/tokenizer.hpp>

namespace
{
using tokenizer = boost::tokenizer<boost::char_separator<char>>;
constexpr const char* SPACE = " ";
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

std::string toString(const Strings& inChain)
{
   return boost::algorithm::join(inChain, SPACE);
}

}
