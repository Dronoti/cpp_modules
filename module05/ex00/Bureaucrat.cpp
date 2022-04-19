#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high, the maximum possible grade is 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low, the minimum possible grade is 150");
}

Bureaucrat::Bureaucrat(): _name("Unknown"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): _name(bureaucrat._name), _grade(bureaucrat._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->_grade = bureaucrat._grade;
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::upGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::downGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade += 1;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}