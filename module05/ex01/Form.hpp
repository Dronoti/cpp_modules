#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int 			_gradeSign;
	const int 			_gradeExec;
	class GradeTooHighException: public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	private:
		const char	*_errMsg;
	public:
		GradeTooLowException(const char *errMsg);
		const char *what() const throw();
	};
public:
	Form();
	Form(const std::string &name, const int gradeExec, const int gradeSign);
	Form(const Form &form);
	~Form();
	Form				&operator=(const Form &form);
	const std::string	&getName() const;
	int					getGradeSign() const;
	int					getGradeExec() const;
	bool				getSigned() const;
	void				beSigned(const Bureaucrat &bureaucrat);
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif
