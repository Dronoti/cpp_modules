#include "Bureaucrat.hpp"

int main()
{
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

	Bureaucrat	trump("Donald Trump", 12);
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
	std::cout << trump << std::endl;

	try
	{
		Form	blank404("Blank404", 155, 10);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Form	blank300("Blank300", 0, 10);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	Form	blank("Blank500", 15, 13);
	std::cout << blank << std::endl;
	gump.signForm(blank);
	trump.signForm(blank);
	std::cout << blank << std::endl;

	return (0);
}