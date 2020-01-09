#pragma once

#include <Utils/TypeAliases.hpp>

namespace funs
{
bool anyOf(const Strings& supportedCommands, const std::string& zeroArgOfUserInput);
Strings lex(const std::string& inCommand, const char* separator);
std::string join(const Strings& inChain);
Hexes merge(const Hex& flagStart, const Hexes& hdlcBody, const Hexes& sumCRC, const Hex& flagEnd);
}

namespace convert
{
//std::string toString(const Strings& inChain);
std::string toString(const Hex& value);
std::string toString(const Hexes& value);
std::string toString(const char* msg, Hex input);
std::string toString(const char* msg, const Hexes& input);
std::string toString(const Strings& hexes);
}
