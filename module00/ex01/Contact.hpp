#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string _nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
public:
	void				setFirstName(std::string _firstName);
	void				setLastName(std::string _lastName);
	void				setNickName(std::string _nickName);
	void				setPhoneNumber(std::string _phoneNumber);
	void				setDarkestSecret(std::string _darkestSecret);
	const std::string&	getFirstName(void) const;
	const std::string&	getLastName(void) const;
	const std::string&	getNickName(void) const;
	const std::string&	getPhoneNumber(void) const;
	const std::string&	getDarkestSecret(void) const;
};

#endif
