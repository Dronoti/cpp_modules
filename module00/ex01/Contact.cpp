#include "Contact.hpp"

void				Contact::setFirstName(std::string _firstName)
{
	this->_firstName = _firstName;
}

void				Contact::setLastName(std::string _lastName)
{
	this->_lastName = _lastName;
}

void				Contact::setNickName(std::string _nickName)
{
	this->_nickName = _nickName;
}

void				Contact::setPhoneNumber(std::string _phoneNumber)
{
	this->_phoneNumber = _phoneNumber;
}

void				Contact::setDarkestSecret(std::string _darkestSecret)
{
	this->_darkestSecret = _darkestSecret;
}

const std::string&	Contact::getFirstName() const
{
	return (this->_firstName);
}

const std::string&	Contact::getLastName() const
{
	return (this->_lastName);
}

const std::string&	Contact::getNickName() const
{
	return (this->_nickName);
}

const std::string&	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

const std::string&	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}
