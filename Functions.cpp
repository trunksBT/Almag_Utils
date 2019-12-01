#include <Utils/TypeAliases.hpp>
#include <boost/tokenizer.hpp>

namespace
{
using tokenizer = boost::tokenizer<boost::char_separator<char>>;
}

namespace funs
{
Strings lex(std::string inCommand, const char* separator)
{
   boost::char_separator<char> sep(separator);
   tokenizer tokens(inCommand, sep);
   Strings retVal(tokens.begin(), tokens.end());
   return retVal;
}
}
