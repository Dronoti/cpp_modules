#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	class GradeTooHighException: public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		const char *what() const throw();
	};
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	~Bureaucrat();
	Bureaucrat			&operator=(const Bureaucrat &bureaucrat);
	const std::string	&getName() const;
	int					getGrade() const;
	void				upGrade();
	void				downGrade();
	void				signForm(Form &form) const;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
