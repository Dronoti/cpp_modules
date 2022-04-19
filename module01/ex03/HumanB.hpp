#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	const std::string	&_name;
	Weapon				*_weapon;
public:
	HumanB(const std::string &name);
	void	attack() const;
	void	setWeapon(Weapon *weapon);
};

#endif
