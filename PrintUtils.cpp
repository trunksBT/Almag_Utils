#include "Utils/PrintUtils.hpp"
#include <sstream>
#include <Utils/Logger.hpp>

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
