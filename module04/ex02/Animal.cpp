#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type)
{
	this->type = type;
	std::cout << "Animal string constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal): type(animal.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	std::cout << "Animal copy assignment operator called" << std::endl;
	return (*this);
}

const std::string &Animal::getType() const
{
	return (this->type);
}
