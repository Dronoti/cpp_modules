#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	robot1("Bumblebee");
	ScavTrap	robot2("Megatron");
	FragTrap	robot3("Optimus Prime");

	robot1.attack("Megatron");
	robot3.attack("Megatron");
	robot2.takeDamage(60);
	robot2.attack("Bumblebee");
	robot1.takeDamage(30);
	robot2.guardGate();
	robot3.highFivesGuys();
	robot1.beRepaired(20);
	robot2.beRepaired(50);

	return (0);
}
