#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name);

int main()
{
	int n = 5;

	Zombie *horde = zombieHorde(n, "Andrey");
	if (horde)
	{
		for (int i = 0; i < n; i++)
			horde[i].announce();
	}
	delete [] horde;
	return (0);
}
