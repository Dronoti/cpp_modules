#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Nameless"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " string constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap):
_name(clapTrap._name),
_hitPoints(clapTrap._hitPoints),
_energyPoints(clapTrap._energyPoints),
_attackDamage(clapTrap._attackDamage)
{
	std::cout << "ClapTrap " << this->_name << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "ClapTrap " << this->_name << " copy assignment operator called" << std::endl;
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints >= 1)
		{
			this->_energyPoints -= 1;
			std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		if (amount < this->_hitPoints)
			this->_hitPoints -= amount;
		else
			this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " takes " << amount
		<< " damage. Remaining HP: " << this->_hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		if (this->_energyPoints >= 1)
		{
			this->_energyPoints -= 1;
			this->_hitPoints += amount;
			std::cout << "ClapTrap " << this->_name << " repaired " << amount
			<< " points. Remaining HP: " << this->_hitPoints << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
}
