#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	gump("Forrest Gump", 155);
	}
	catch (const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Bureaucrat	trump("Donald Trump", 0);
	}
	catch (const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	Bureaucrat	gump("Forrest Gump", 150);
	std::cout << gump << std::endl;
	try
	{
		gump.downGrade();
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	Bureaucrat	trump("Donald Trump", 2);
	std::cout << trump << std::endl;
	try
	{
		trump.upGrade();
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << trump << std::endl;
	try
	{
		trump.upGrade();
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}