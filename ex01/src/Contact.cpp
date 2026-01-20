#include "Contact.hpp"

Contact::Contact() : _index(0), _firstName("Firstname"), _lastName("Lastname"), _nickName("Nickname")
{
	std::cout << "Contact default constructor called" << std::endl;
}

Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickName) :
_index(index), _firstName(firstName), _lastName(lastName), _nickName(nickName)
{
	std::cout << "Contact parametrized constructor called" << std::endl;
}

Contact::Contact(const Contact &other) :
_index(other._index), _firstName(other._firstName),
_lastName(other._lastName), _nickName(other._nickName)
{
	std::cout << "Contact copy constructor called" << std::endl;
}

Contact& Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		this->_index = other._index;
		this->_firstName = other._firstName;
		this->_lastName = other._lastName;
		this->_nickName = other._nickName;
	}
	return (*this);
}

Contact::~Contact()
{
	std::cout << "Contact destructor called" << std::endl;
}
