#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

class PhoneBook
{
private:
	Contact	_contacts[8];
	int		_index;
	int 	_size;
	void	printField(std::string field) const;
public:
	PhoneBook(void);
	void	addContact(std::string fields[5]);
	void	printContact(int index) const;
	int		printAllContacts(void) const;
};

#endif
