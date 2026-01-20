#include "Phonebook.hpp"

Phonebook::Phonebook() : _size(0)
{
	std::cout << "Default phonebook constructor called" << std::endl;
}

Phonebook::Phonebook(const Phonebook &other)
{

}

Phonebook& Phonebook::operator=(const Phonebook &other)
{

}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor called" << std::endl;
}
