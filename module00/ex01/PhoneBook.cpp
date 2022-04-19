#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): _index(0), _size(0) {}

void	PhoneBook::addContact(std::string fields[5])
{
	this->_contacts[this->_index].setFirstName(fields[0]);
	this->_contacts[this->_index].setLastName(fields[1]);
	this->_contacts[this->_index].setNickName(fields[2]);
	this->_contacts[this->_index].setPhoneNumber(fields[3]);
	this->_contacts[this->_index].setDarkestSecret(fields[4]);
	this->_index++;
	if (this->_index > 7)
		this->_index = 0;
	if (this->_size < 8)
		this->_size++;
}

void	PhoneBook::printContact(int index) const
{
	if (index < 0 || index >= this->_size)
		std::cout << "Sorry, invalid index" << std::endl << std::endl;
	else
	{
		std::cout << "CONTACT INFORMATION FOR INDEX " << index << std::endl;
		std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
		std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl << std::endl;
	}
}

int		PhoneBook::printAllContacts() const
{
	if (!this->_size)
	{
		std::cout << "Phone Book is empty" << std::endl << std::endl;
		return (0);
	}
	else
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|     index|first name| last name|  nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		for (int i = 0; i < this->_size; i++)
		{
			std::cout << "|         " << i << '|';
			this->printField(this->_contacts[i].getFirstName());
			this->printField(this->_contacts[i].getLastName());
			this->printField(this->_contacts[i].getNickName());
			std::cout << std::endl;
			if (i + 1 < this->_size)
				std::cout << "|----------|----------|----------|----------|" << std::endl;
		}
		std::cout << "---------------------------------------------" << std::endl << std::endl;
		return (1);
	}
}

void	PhoneBook::printField(std::string field) const
{
	if (field.length() > 10)
		std::cout << field.substr(0, 9) << '.' << '|';
	else
	{
		std::cout << std::setfill(' ') << std::setw (10);
		std::cout << field << '|';
	}
}
