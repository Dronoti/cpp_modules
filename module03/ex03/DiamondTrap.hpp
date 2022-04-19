#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string		_name;
public:
	DiamondTrap();
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &diamondTrap);
	~DiamondTrap();
	using	ClapTrap::operator=;
	using	ScavTrap::attack;
	void	whoAmI();
};

#endif
