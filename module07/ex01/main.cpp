#include <iostream>
#include "iter.hpp"

void	ft_pow(int &n)
{
	n *= n;
}

void	ft_up(double &n)
{
	n++;
}

void	ft_down(char &c)
{
	c--;
}

void	ft_print_int(int &n)
{
	std::cout << n << " ";
}

void	ft_print_double(double &n)
{
	std::cout << n << " ";
}

void	ft_print_char(char &c)
{
	std::cout << c << " ";
}

int	main(void)
{
	int	arrInt[7] = {1, 2, 3, 4, 5, 6, 7};
	iter(arrInt, 7, ft_pow);
	iter(arrInt, 7, ft_print_int);
	std::cout << std::endl;

	double	arrDouble[5] = {10.2, 20.6, 30.5, 40.3, 50.7};
	iter(arrDouble, 5, ft_up);
	iter(arrDouble, 5, ft_print_double);
	std::cout << std::endl;

	char	arrChar[3] = {'c', 'd', 'v'};
	iter(arrChar, 3, ft_down);
	iter(arrChar, 3, ft_print_char);
	std::cout << std::endl;

	return (0);
}
