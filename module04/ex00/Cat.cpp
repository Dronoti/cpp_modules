#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat make sound: meow meow!" << std::endl;
}
