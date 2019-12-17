#pragma once

#include <Utils/TypeAliases.hpp>

class UserCommandParser
{
public:
    std::string validate(const Strings& inCommand);
    Strings receiveAndLex();

private:
    Strings performLexer(std::string inCommand);
};
