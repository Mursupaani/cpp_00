#pragma once
# include <iostream>
# include <string>

class Contact
{
	public:
		Contact();
		Contact(int index, std::string firstName, std::string lastName, std::string nickName);
		Contact(const Contact &other);
		Contact &operator=(const Contact &other);
		~Contact();
	private:
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
};
