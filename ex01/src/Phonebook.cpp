#include "Phonebook.hpp"
#include <cstdio>
#include <iostream>

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

void	Phonebook::printContact()
{
	if (_size == 0)
	{
		std::cout << "No saved contacts" << std::endl;
		return ;
	}
	for (int i = 0; i < _size; ++i)
	{
		std::cout << _contacts[i].getFirstName() + " " + _contacts[i].getLastName() + " " + _contacts[i].getNickName() + " " + _contacts[i].getPhoneNumber() + " " + _contacts[i].getDarkestSecret() << std::endl;
	}
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.ignore();
	std::getchar();
}
