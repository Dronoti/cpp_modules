#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(const Dog &dog);
	~Dog();
	using	Animal::operator=;
	void	makeSound() const;
};

#endif
