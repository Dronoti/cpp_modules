#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(const Dog &dog);
	~Dog();
	using	Animal::operator=;
	void	makeSound() const;
};

#endif
