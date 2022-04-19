#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	Anton("Anton");
	Anton.announce();

	Zombie *Andrey = newZombie("Andrey");
	Zombie	*Oleg = newZombie("Oleg");

	Andrey->announce();
	Oleg->announce();

	randomChump("Anna");
	randomChump("Kate");

	delete Andrey;
	delete Oleg;
	return (0);
}
