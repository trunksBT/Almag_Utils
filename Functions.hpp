#pragma once

#include <Utils/TypeAliases.hpp>

namespace funs
{
bool anyOf(const Strings& supportedCommands, const std::string& zeroArgOfUserInput);
Strings lex(const std::string& inCommand, const char* separator);
std::string join(const Strings& inChain);
std::string toString(const Strings& inChain);
}
