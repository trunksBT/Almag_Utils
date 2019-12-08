#ifndef SRC_UTILS_TYPEALIASES
#define SRC_UTILS_TYPEALIASES

#include <string>
#include <vector>
#include <boost/optional.hpp>

using Hex = unsigned char;
using HexInt = unsigned int;
using Hexes = std::vector<Hex>;
using HexesInt = std::vector<HexInt>;

using Strings = std::vector<std::string>;
using StringsMatrix = std::vector<std::vector<std::string>>;
using MaybeString = boost::optional<std::string>;
using MaybeStrings = boost::optional<std::vector<std::string>>;

using ReturnCode = bool;

enum class FRAME_TYPE : int
{
   I = 0,
   U = 1,
   XID = 2
};

enum class CTRL_BYTE_U_FRAME : int
{
   UA = 10,
   SNRM = 11
};

#endif  // SRC_UTILS_TYPEALIASES
