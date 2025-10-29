#include <string>

namespace log_line
{
    std::string message(std::string line)
    {
        // return the message
        int colon_position = line.find(':');
        return line.substr(colon_position + 1);
    }

    std::string log_level(std::string line)
    {
        // return the log level
    }

    std::string reformat(std::string line)
    {
        // return the reformatted message
    }
}
