#pragma once

#include <Utils/TypeAliases.hpp>

namespace printUtils
{
void printHex(const char* msg, Hex input);
void printFrame(const char* msg, const Hexes& input);
void printStrings(const Strings& hexes);
}
