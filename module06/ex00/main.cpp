#include <iostream>
#include <cmath>

void	convertToChar(const std::string &arg)
{
	const char c = arg[0];

	if (arg.length() == 1 && !isdigit(c))
		std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
	else
	{
		int num = std::stoi(arg);
		if (isprint(num))
			std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
		else if (num >= 0 && num <= 255)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
}

void	convertToInt(const std::string &arg)
{
	int num;

	if (arg.length() == 1)
	{
		num = static_cast<int>(arg[0]);
		if (num >= '0' && num <= '9')
			num -= '0';
	}
	else
		num = std::stoi(arg);
	std::cout << num << std::endl;
}

void	convertToFloat(const std::string &arg)
{
	float num;

	if (arg.length() == 1)
	{
		num = static_cast<float>(arg[0]);
		if (num >= '0' && num <= '9')
			num -= '0';
	}
	else
		num = static_cast<float>(std::stof(arg));
	std::cout << num;
	if (roundf(num) == num && isfinite(num))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	convertToDouble(const std::string &arg)
{
	double num;

	if (arg.length() == 1)
	{
		num = static_cast<double>(arg[0]);
		if (num >= '0' && num <= '9')
			num -= '0';
	}
	else
		num = static_cast<double>(std::stod(arg));
	std::cout << num;
	if (roundf(num) == num && isfinite(num))
		std::cout << ".0";
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}

	for (int i = 1; argv[1][i]; i++)
	{
		if (isdigit(argv[1][i - 1]) && isalpha(argv[1][i]))
		{
			if (argv[1][i] == 'f' && !argv[1][i + 1])
				break ;
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return (0);
		}
	}

	try
	{
		std::cout << "char: ";
		convertToChar(argv[1]);
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}

	try
	{
		std::cout << "int: ";
		convertToInt(argv[1]);
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}

	try
	{
		std::cout << "float: ";
		convertToFloat(argv[1]);
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}

	try
	{
		std::cout << "double: ";
		convertToDouble(argv[1]);
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}

	return (0);
}