#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	const std::string	&_name;
	Weapon				&_weapon;
public:
	HumanA(const std::string &name, Weapon &weapon);
	void	attack() const;
};

#endif
