#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap " << this->_name << " default constructor called" << std::endl;
	ScavTrap::_energyPoints = 50;
	this->_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::DiamondTrap(const std::string &name):
ClapTrap(name + "_clap_name"),
ScavTrap(name + "_clap_name"),
FragTrap(name + "_clap_name"),
_name(name)
{
	std::cout << "DiamondTrap " << this->_name << " string constructor called" << std::endl;
	ScavTrap::_energyPoints = 50;
	this->_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap):
ClapTrap(diamondTrap._name + "_clap_name"),
ScavTrap(diamondTrap._name + "_clap_name"),
FragTrap(diamondTrap._name + "_clap_name")
{
	this->_name = diamondTrap._name;
	ScavTrap::_energyPoints = 50;
	this->_energyPoints = ScavTrap::_energyPoints;
	std::cout << "DiamondTrap " << this->_name << " copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->_name << " DiamondTrap::_name: " << this->_name << std::endl;
	std::cout << "DiamondTrap " << this->_name << " ClapTrap::_name: " << ClapTrap::_name << std::endl;
}
