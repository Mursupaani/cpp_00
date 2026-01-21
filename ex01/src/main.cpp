#include "Phonebook.hpp"
#include "phonebookUtils.hpp"
#include <cstdlib>


int	handleUserInput(std::string input, Phonebook &pb)
{
	clearScreen();
	if (input == "a" || input == "add")
		pb.addContact();
	else if (input == "s" || input == "search")
		pb.printSearchWindow();
	else if (input == "e" || input == "exit")
		std::exit(EXIT_SUCCESS);
	else
		return (1);
	return (0);
}

std::string getUserInput()
{
	std::string	input;
	std::cout << "Please input what you wish to do:" << std::endl;
	std::cout << "[A]DD - Add a new contact to phonebook" << std::endl;
	std::cout << "[S]EARCH - Display contact" << std::endl;
	std::cout << "[E]XIT - Add a new contact to phonebook" << std::endl;
	std::cin >> input;
	for (unsigned long i = 0; i < input.length(); ++i)
		input[i] = std::tolower(input[i]);
	return (input);
}

int	main(void)
{
	Phonebook	pb;
	std::string	input;
	int			ret = 0;

	while (true)
	{
		clearScreen();
		if (ret == 1)
			std::cout << "Invalid input \"" << input << "\". Please try again\n" << std::endl;
		input = getUserInput();
		ret = handleUserInput(input, pb);
	}
	return (EXIT_SUCCESS);
}
