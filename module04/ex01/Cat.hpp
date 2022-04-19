#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &cat);
	using	Animal::operator=;
	void	makeSound() const;
};

#endif
