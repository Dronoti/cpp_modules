#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	typedef struct s_forms
	{
		std::string	formType;
		Form		*(Intern::*form)(const std::string&) const;
	}				t_forms;
	Form	*makeShrubberyCreationForm(const std::string &target) const;
	Form	*makePresidentialPardonForm(const std::string &target) const;
	Form	*makeRobotomyRequestForm(const std::string &target) const;
public:
	Intern();
	Intern(const Intern &intern);
	~Intern();
	Intern	&operator=(const Intern &intern);
	Form	*makeForm(const std::string &formName, const std::string &target) const;
};

#endif
