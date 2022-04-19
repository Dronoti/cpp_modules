#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	for (int i = 0; i <= 99; i++) {
		this->ideas[i] = brain.ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	for (int i = 0; i <= 99; i++) {
		this->ideas[i] = brain.ideas[i];
	}
	std::cout << "Brain copy assignment operator called" << std::endl;
	return (*this);
}
