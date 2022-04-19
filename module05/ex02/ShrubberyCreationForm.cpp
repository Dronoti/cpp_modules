#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
Form("Shrubbery Creation Form", 137, 145),
_target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
Form("Shrubbery Creation Form", 137, 145),
_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf):
Form("Shrubbery Creation Form", 137, 145),
_target(scf._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	this->checkExecute(bureaucrat);
	std::ofstream	out(this->_target + "_shrubbery", std::ofstream::out);
	out << "       _-_       " << std::endl;
	out << "    /~~   ~~\\   " << std::endl;
	out << " /~~         ~~\\" << std::endl;
	out << "{               }" << std::endl;
	out << " \\  _-     -_  /" << std::endl;
	out << "   ~  \\\\ //  ~ " << std::endl;
	out << "       | |       " << std::endl;
	out << "       | |       " << std::endl;
	out << "      // \\\\    " << std::endl;
	out.close();
}
