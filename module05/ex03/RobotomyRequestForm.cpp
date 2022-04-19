#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
Form("Robotomy Request Form", 45, 72),
_target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
Form("Robotomy Request Form", 45, 72),
_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf):
Form("Robotomy Request Form", 45, 72),
_target(rrf._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	this->checkExecute(bureaucrat);
	if (rand() % 2)
		std::cout << this->_target << " has been successfully robotomized!" << std::endl;
	else
		std::cout << this->_target << " was not robotomized!" << std::endl;
}
