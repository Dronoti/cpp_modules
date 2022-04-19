#include "Intern.hpp"

int main()
{
	Bureaucrat	gump("Forrest Gump", 147);
	Bureaucrat	rocky("Rocky", 72);
	Bureaucrat	trump("Donald Trump", 3);
	Intern		intern;

	Form		*shrub = intern.makeForm("shrubbery creation", "Garden");
	Form		*rrf = intern.makeForm("robotomy request", "Bender");
	Form		*pardon = intern.makeForm("presidential pardon", "Zap");
	Form		*unknown = intern.makeForm("Form 28B", "Unknown");

	std::cout << *shrub << std::endl;
	std::cout << *rrf << std::endl;
	std::cout << *pardon << std::endl;
	std::cout << "Unknown not created: " << unknown << std::endl;

	rocky.signForm(*pardon);

	trump.signForm(*pardon);
	rocky.signForm(*rrf);
	rocky.signForm(*shrub);

	gump.executeForm(*shrub);
	rocky.executeForm(*shrub);
	trump.executeForm(*rrf);
	trump.executeForm(*pardon);

	delete	shrub;
	delete	rrf;
	delete	pardon;

	return (0);
}