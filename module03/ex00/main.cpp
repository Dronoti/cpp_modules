#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	rocky("Rocky");
	ClapTrap	rambo("Rambo");

	rocky.attack("Rambo");
	rambo.takeDamage(0);

	rambo.takeDamage(50);
	rambo.takeDamage(10);

	rambo = rocky;
	rambo.takeDamage(2);
	rambo.beRepaired(1);

	ClapTrap	robot(rambo);
	robot.attack("RoboCop");
	robot.takeDamage(5);
	robot.beRepaired(2);

	robot.attack("Andrey");
	robot.attack("Andrey");
	robot.attack("Andrey");
	robot.attack("Andrey");
	robot.attack("Andrey");
	robot.attack("Andrey");
	robot.attack("Andrey");
	robot.beRepaired(2);

	return (0);
}
