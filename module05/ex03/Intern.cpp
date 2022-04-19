#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &intern) {*this = intern;}

Intern::~Intern() {}

Intern	&Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Form	*Intern::makeShrubberyCreationForm(const std::string &target) const
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makePresidentialPardonForm(const std::string &target) const
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeRobotomyRequestForm(const std::string &target) const
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makeForm(const std::string &formName, const std::string &target) const
{
	t_forms	forms[] =
	{
			{ "shrubbery creation", &Intern::makeShrubberyCreationForm },
			{ "robotomy request", &Intern::makeRobotomyRequestForm },
			{ "presidential pardon", &Intern::makePresidentialPardonForm }
	};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i].formType == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*forms[i].form)(target));
		}
	}
	std::cout << "Intern failed to create an unknown form: " << formName << std::endl;
	return (NULL);
}
