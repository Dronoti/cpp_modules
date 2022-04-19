#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat)
{
	this->_brain = new Brain();
	std::cout << "Cat copy constructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat make sound: meow meow!" << std::endl;
}
