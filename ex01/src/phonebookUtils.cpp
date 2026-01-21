#include "phonebookUtils.hpp"

std::string	truncateMaxTen(const std::string str, const size_t maxLen)
{
	if (str.length() <= maxLen)
		return (str);
	return (str.substr(0, maxLen - 1)) + ".";
}

void clearScreen()
{
    std::cout << "\033[2J\033[1;1H";
}

