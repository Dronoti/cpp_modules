#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat &cat);
	using	Animal::operator=;
	void	makeSound() const;
};

#endif
