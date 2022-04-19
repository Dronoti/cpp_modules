#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int		n = 4;
	Animal	*animals[n];

	for (int i = 0; i < n; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < n; i++)
		animals[i]->makeSound();

	for (int i = 0; i < n; i++)
		delete animals[i];

	return (0);
}
