#include <Utils/Utils.hpp>
#include <sstream>
#include <Utils/Logger.hpp>

using namespace defaultVals;

namespace ui
{

bool validateUserInput(const Strings& userInput, uint32_t numberOfExpectedArgs)
{
   if (userInput.size() < numberOfExpectedArgs)
   {
      LOG(warning) << "Zbyt mala liczba argumentow "
         << "wpisz 'help' aby zobaczyc liste dostepnych pozycji";
      return false;
   }
   LOG(debug) << "Poprawna liczba argumentow";
   return true;
}

}

std::string multiplyString(int times, const std::string& phrase)
{
   std::stringstream retVal;
   for (int i = 0 ; i<times; i++)
   {
      retVal << phrase;
   }
   return retVal.str();
}

