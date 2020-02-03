#pragma once

#include <queue>
#include <Utils/TypeAliases.hpp>

class HDLCFrame;

namespace funs
{
bool anyOf(const Strings& supportedCommands, const std::string& zeroArgOfUserInput);
Hexes merge(const Hex& flagStart, const Hexes& hdlcBody, const Hexes& sumCRC, const Hex& flagEnd);
std::string join(const Strings& inChain);
Strings lex(const std::string& inCommand, const char* separator);
}

namespace convert
{
std::string toString(std::queue<HDLCFrame>& inQueue);
std::string toString(const char* msg, const Hexes& input);
std::string toString(const char* msg, Hex input);
std::string toString(const Hex& value);
std::string toString(const Hexes& value);
std::string toString(const Strings& hexes, const char* separator = " ");
}
