#include <string>

namespace log_line
{
    std::string message(std::string line)
    {
        // return the message
        int colon_position = line.find(":");
        return line.substr(colon_position + 2);
    }

    std::string log_level(std::string line)
    {
        // return the log level
        int colon_position = line.find(":");
        return line.substr(1, colon_position - 2);
    }

    std::string reformat(std::string line)
    {
        // return the reformatted message
        std::string level = log_level(line);
        std::string log_message = message(line);

        return log_message + " (" + level + ")";
    }
}
