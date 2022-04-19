#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	robot("WALL-E");
	ScavTrap	robot2("EWA");
	ScavTrap	robot3(robot);
	ClapTrap	robot4("Megatron");

	robot3.attack("EWA");
	robot2.takeDamage(20);
	robot2.attack("WALL-E");
	robot3.guardGate();
	robot2.guardGate();
	robot2.beRepaired(10);
	robot2.takeDamage(200);
	robot2.beRepaired(300);

	robot4.attack("WALL-E");

	return (0);
}
