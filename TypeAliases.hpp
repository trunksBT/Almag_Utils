#pragma once

#include <string>
#include <vector>
#include <boost/optional.hpp>

using Hex = unsigned char;
using Hexes = std::vector<Hex>;
using HexInt = unsigned int;
using HexesInt = std::vector<HexInt>;

using MaybeString = boost::optional<std::string>;
using MaybeStrings = boost::optional<std::vector<std::string>>;
using Strings = std::vector<std::string>;
using StringsMatrix = std::vector<std::vector<std::string>>;

using ReturnCode = bool;
