#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	gump("Forrest Gump", 147);
	Bureaucrat	rocky("Rocky", 72);
	Bureaucrat	trump("Donald Trump", 3);

	ShrubberyCreationForm	shrub("form_shrubbery");
	RobotomyRequestForm		robot("form_robotomy");
	PresidentialPardonForm	pardon("form_presidential");

	trump.executeForm(shrub);
	trump.executeForm(pardon);

	rocky.signForm(pardon);

	trump.signForm(pardon);
	rocky.signForm(robot);
	rocky.signForm(shrub);

	gump.executeForm(shrub);
	rocky.executeForm(shrub);
	trump.executeForm(robot);
	trump.executeForm(pardon);

	std::cout << pardon << std::endl;
	std::cout << gump << std::endl;

	return (0);
}