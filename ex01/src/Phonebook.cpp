#include "Phonebook.hpp"
#include "phonebookUtils.hpp"

Phonebook::Phonebook() : _pos(-1), _size(0)
{
}

Phonebook::~Phonebook()
{
}

int	Phonebook::getNextPos()
{
	_pos++;
	if (_pos >= 8)
		return (0);
	return (_pos);
}

void	Phonebook::addContact()
{
	std::string	input;
	int			pos;

	pos = getNextPos();
	std::cout << "Please input first name: " << std::endl;
	std::cin >> input;
	_contacts[pos].setFirstName(input);
	std::cout << "Please input last name: " << std::endl;
	std::cin >> input;
	_contacts[pos].setLastName(input);
	std::cout << "Please input nick name: " << std::endl;
	std::cin >> input;
	_contacts[pos].setNickName(input);
	std::cout << "Please input phone number: " << std::endl;
	std::cin >> input;
	_contacts[pos].setPhoneNumber(input);
	std::cout << "Please input darkest secret: " << std::endl;
	std::cin >> input;
	_contacts[pos].setDarkestSecret(input);
	_size++;
	if (_size > _max)
		_size = _max;
}

void	Phonebook::printSearchWindow()
{
	if (_size == 0)
	{
		std::cout << "No saved contacts" << std::endl;
		return ;
	}
	printSearchHeader();
	printContactsForSearch();
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.ignore();
	std::getchar();
}

void	Phonebook::printSearchHeader()
{
	std::cout << "|";
	std::cout << std::setw (10) << std::right;
	std::cout << "INDEX";
	std::cout << "|";
	std::cout << std::setw (10) << std::right;
	std::cout << "FIRST NAME";
	std::cout << "|";
	std::cout << std::setw (10) << std::right;
	std::cout << "LAST NAME";
	std::cout << "|";
	std::cout << std::setw (10) << std::right;
	std::cout << "NICK NAME";
	std::cout << "|" << std::endl;
}

void	Phonebook::printContactsForSearch()
{
	for (int i = 0; i < _size; ++i)
	{
		std::cout << "|";
		std::cout << std::setw (10) << std::right;
		std::cout << i;
		std::cout << "|";
		std::cout << std::setw (10) << std::right;
		std::cout << truncateMaxTen(_contacts[i].getFirstName(), 10);
		std::cout << "|";
		std::cout << std::setw (10) << std::right;
		std::cout << truncateMaxTen(_contacts[i].getLastName(), 10);
		std::cout << "|";
		std::cout << std::setw (10) << std::right;
		std::cout << truncateMaxTen(_contacts[i].getNickName(), 10);
		std::cout << "|" << std::endl;
	}
}
