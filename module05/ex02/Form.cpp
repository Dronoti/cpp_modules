#include "Form.hpp"

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high, the maximum possible grade is 1");
}

Form::GradeTooLowException::GradeTooLowException(const char *errMsg): _errMsg(errMsg) {}

const char	*Form::GradeTooLowException::what() const throw()
{
	return (this->_errMsg);
}

const char	*Form::IncorrectFormException::what() const throw()
{
	return ("Сan't execute the form!");
}

Form::Form(): _name("Unknown"), _signed(false), _gradeSign(150), _gradeExec(150) {}

Form::Form(const std::string &name, const int gradeExec, const int gradeSign):
_name(name),
_signed(false),
_gradeSign(gradeSign),
_gradeExec(gradeExec)
{
	if (gradeExec < 1 || gradeSign < 1)
		throw GradeTooHighException();
	else if (gradeExec > 150 || gradeSign > 150)
		throw GradeTooLowException("The grade is too low, the minimum possible grade is 150");
}

Form::Form(const Form &form):
_name(form._name),
_signed(form._signed),
_gradeSign(form._gradeSign),
_gradeExec(form._gradeExec)
{}

Form::~Form() {}

Form &Form::operator=(const Form &form)
{
	this->_signed = form._signed;
	return (*this);
}

const std::string &Form::getName() const
{
	return (this->_name);
}

int Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int Form::getGradeExec() const
{
	return (this->_gradeExec);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeSign())
		throw GradeTooLowException("bureaucrat grade is too low");
	this->_signed = true;
}

void	Form::checkExecute(const Bureaucrat &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->_gradeExec)
		throw GradeTooLowException("Bureaucrat grade is too low!");
	else if (!this->_signed)
		throw IncorrectFormException();
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Form name: " << form.getName() << " | " << "Signed: ";
	if (form.getSigned())
		out << "yes";
	else
		out << "no";
	out << " | " << "Grade required to sign: " << form.getGradeSign()
	<< " | " << "Grade required to execute: " << form.getGradeExec();
	return (out);
}
