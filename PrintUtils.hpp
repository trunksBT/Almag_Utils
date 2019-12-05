#pragma once

#include <Utils/TypeAliases.hpp>

namespace printUtils
{
std::string toString(const Hex& value);
std::string toString(const Hexes& value);
void printHex(const char* msg, Hex input);
void printFrame(const char* msg, const Hexes& input);
void printStrings(const Strings& hexes);
}
