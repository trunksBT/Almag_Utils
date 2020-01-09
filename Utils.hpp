#pragma once

#include <string_view>
#include <vector>
#include <Utils/TypeAliases.hpp>

enum class OBJECT_TYPE : int
{
	MENU = 0,
	COMMAND = 1
};

namespace reqNumOfArgsFor
{
constexpr int CREATE_MENU = 3;
constexpr int CREATE_COMMAND = 3;

namespace db
{
constexpr int GET = 2;
constexpr int PUT = 4;
}

namespace ctrl
{
constexpr int DUMMY_SCAN = 2;
}
}

namespace idx
{
static const int COMMAND_OR_ACTION_NAME = 0;
static const int OBJECT_NAME = 1;
static const int COMMAND_NAME = 2;
}

namespace idxOf
{
constexpr const int COMMAND = 0;
}

namespace ui
{

bool validateUserInput(const Strings& userInput, uint32_t numberOfExpectedArgs);

namespace actions
{
static const std::string EXIT = "exit";
static const std::string HELP = "help";
static const std::string HELP_WHEN_UNKNOWN = " - not supported, please check command constraints, paste 'help' or 'exit'";
}
}

namespace defaultVals
{
constexpr const char* SLASH = "/";
constexpr const char* UNDERSCORE = "_";
constexpr const char* FOR_STRING = "DEFAULT_STRING";
constexpr const char* BASH_DOLAR = "$ ";
constexpr const char* END_LINE = "\n";
constexpr const char* SEPARATOR = ": ";
constexpr const uint32_t ZERO = 0;
constexpr const uint32_t ONE = 1;
constexpr const uint32_t TWO = 2;
constexpr const char* CURSOR_SIGN = ":- ";
constexpr const char* SPACE_AS_SEPARATOR = " ";  // wskaznik na tablice znakow
constexpr const char* INDENT_OF_SIZE_ONE = "---";
constexpr static int NUMBER_OF_DUMMY_SCANS_FOR_9_6_KBPS = 6;
constexpr static uint8_t ONE_DUMMY_SCAN = 1;
constexpr static int DIRTY_HACK_FOR_PUB_SUB_ZMQ_LOST_MESSAGE = 1;
}

namespace validation
{
enum class CODE : int
{
    ACCEPTED = 0,
    CLOSE = 10
};

constexpr const char* ACCEPTED = "ACCEPTED";
constexpr const char* REJECTED_UNKNOWN_COMMAND = "REJECTED_UNKNOWN_COMMAND";
constexpr const char* SHUTDOWN = "SHUTDOWN";
}

namespace command
{
const std::string START_POOLING = "StartPooling";
const std::string START_POOLING_NULL = "StartPooling_NULL";
const std::string CALIBRATE = "Calibrate";
const std::string CALIBRATE_NULL = "Calibrate_NULL";
const std::string DELIMITER = " ";
const std::string UNKNOWN = "Unknown";
}  // namespace command

namespace dbObjects
{
namespace OT
{
const std::string_view IO_PATHS = "IOPaths";
}  // namespace OT
}  // dbObjects

std::string multiplyString(int times, const std::string& phrase);
