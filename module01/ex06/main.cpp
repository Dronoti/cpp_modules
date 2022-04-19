#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl	harl;
		harl.complain(argv[1]);
	}
	else
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	return (0);
}
