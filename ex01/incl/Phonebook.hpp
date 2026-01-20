#pragma once
# include <iostream>
# include <string>
# include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		Phonebook(const Phonebook &other);
		Phonebook &operator=(const Phonebook &other);
		~Phonebook();
	private:
		Contact _contacts[8];
		int		_size;
};
