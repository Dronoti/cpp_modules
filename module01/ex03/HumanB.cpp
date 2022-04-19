#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): _name(name), _weapon(nullptr) {}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}

void	HumanB::attack() const
{
	if (!this->_weapon)
		std::cout << this->_name << " attacks with their with nothing" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
