#include "PhoneBook.hpp"

int	checkPhoneNumber(std::string phoneNumber)
{
	if (phoneNumber == "")
		return (0);
	for (int i = 0; phoneNumber[i]; i++)
	{
		if ((phoneNumber[i] < '0' || phoneNumber[i] > '9')
			&& (phoneNumber[i] != ' ' && phoneNumber[i] != '+'))
			return (0);
	}
	return (1);
}

int main(void)
{
	PhoneBook	phoneBook;
	std::string input;
	std::string fields[5];
	int 		index;

	std::cout << "Awesome Phone Book" << std::endl;
	std::cout << "Available commands:" << std::endl;
	std::cout << "ADD - save a new contact;" << std::endl;
	std::cout << "SEARCH - display a specific contact;" << std::endl;
	std::cout << "EXIT - to close the phone book." << std::endl << std::endl;
	while (1)
	{
		std::cout << "Please enter command: ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "Enter contact information" << std::endl;
			std::cout << "First name: ";
			std::getline(std::cin, fields[0]);
			while (fields[0] == "")
			{
				std::cout << "First name cannot be empty please try again: ";
				std::getline(std::cin, fields[0]);
			}
			std::cout << "Last name: ";
			std::getline(std::cin, fields[1]);
			while (fields[1] == "")
			{
				std::cout << "Last name cannot be empty please try again: ";
				std::getline(std::cin, fields[1]);
			}
			std::cout << "Nickname: ";
			std::getline(std::cin, fields[2]);
			while (fields[2] == "")
			{
				std::cout << "Nickname cannot be empty please try again: ";
				std::getline(std::cin, fields[2]);
			}
			std::cout << "Phone number: ";
			std::getline(std::cin, fields[3]);
			while (!checkPhoneNumber(fields[3]))
			{
				std::cout << "Invalid phone number please try again: ";
				std::getline(std::cin, fields[3]);
			}
			std::cout << "Darkest Secret: ";
			std::getline(std::cin, fields[4]);
			while (fields[4] == "")
			{
				std::cout << "Darkest Secret cannot be empty please try again: ";
				std::getline(std::cin, fields[4]);
			}
			phoneBook.addContact(fields);
			std::cout << "Contact added" << std::endl << std::endl;
		}
		else if (input == "SEARCH")
		{
			if (phoneBook.printAllContacts())
			{
				std::cout << "Please enter index: ";
				std::cin >> index;
				if (std::cin.fail())
					std::cout << "Invalid input" << std::endl << std::endl;
				else
					phoneBook.printContact(index);
				std::cin.clear();
				std::cin.ignore(2147483647, '\n');
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "Phone Book closed" << std::endl;
			break;
		}
		else
			std::cout << "Invalid command" << std::endl << std::endl;
	}
	return (0);
}