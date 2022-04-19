#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &scavTrap);
	~ScavTrap();
	using	ClapTrap::operator=;
	void	attack(const std::string &target);
	void	guardGate();
};

#endif
