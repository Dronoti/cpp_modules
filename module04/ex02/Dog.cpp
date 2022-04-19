#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog)
{
	this->_brain = new Brain();
	std::cout << "Dog copy constructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog make sound: woof woof!" << std::endl;
}
