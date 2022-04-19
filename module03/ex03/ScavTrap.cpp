#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap " << this->_name << " default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " string constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap): ClapTrap(scavTrap)
{
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints >= 1)
		{
			this->_energyPoints -= 1;
			std::cout << "ScavTrap " << this->_name << " attacks " << target
					  << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		}
		else
			std::cout << "ScavTrap " << this->_name << " has no energy" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
