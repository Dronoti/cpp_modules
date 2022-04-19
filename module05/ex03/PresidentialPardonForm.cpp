#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
Form("Presidential Pardon Form", 5, 25),
_target("") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
Form("Presidential Pardon Form", 5, 25),
_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf):
Form("Presidential Pardon Form", 5, 25),
_target(ppf._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	this->checkExecute(bureaucrat);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
