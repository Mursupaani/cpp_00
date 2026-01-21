#pragma once
# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();

		void	addContact();
		int		getNextPos();
		void	printSearchWindow();
	private:
		static constexpr int	_max = 8;
		int						_pos;
		int						_size;
		Contact					_contacts[_max];

		void	printContactsForSearch();
		void	printSearchHeader();
};
