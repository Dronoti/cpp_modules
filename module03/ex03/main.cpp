#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	one("Mario");

	one.attack("Luigi");
	one.takeDamage(30);
	one.beRepaired(20);
	one.highFivesGuys();
	one.guardGate();
	one.whoAmI();

	for (int i = 0; i < 49; i++)
		one.attack("Luigi");

	return (0);
}
