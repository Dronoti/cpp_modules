#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &rrf);
	~RobotomyRequestForm();
	using	Form::operator=;
	void	execute(const Bureaucrat &bureaucrat) const;
};

#endif
