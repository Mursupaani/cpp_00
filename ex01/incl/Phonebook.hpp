#pragma once
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();

		void	addContact();
		int		getNextPos();
		void	searchWindow();
		int		getStatus();
		void	setStatus(int status);
	private:
		static constexpr int	_max = 8;
		int						_pos;
		int						_size;
		Contact					_contacts[_max];
		int						_status;

		void	printContactsForSearch();
		void	printSearchHeader();
		void	chooseContact();
		void	printContact(int index);
};
