#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
private:
	std::string	_name;
public:
	Zombie(const std::string name="Zombie without a name");
	~Zombie(void);
	void	announce(void) const;
};

#endif
