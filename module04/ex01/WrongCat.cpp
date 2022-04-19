#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat): WrongAnimal(wrongCat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat make sound: meow meow!" << std::endl;
}
