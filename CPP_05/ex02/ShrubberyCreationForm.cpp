#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form(
		"Shrubbery Creation Form",
		target,
		ShrubberyCreationForm::gradeSign,
		ShrubberyCreationForm::executeSign
		)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& scf):
	Form(
		"Shrubbery Creation Form",
		scf.getTarget(),
		ShrubberyCreationForm::gradeSign,
		ShrubberyCreationForm::executeSign
		)
{
	this->setSign(scf.isSigned());
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& scf)
{
	this->setSign(scf.isSigned());
	this->setTarget(scf.getTarget());
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& brcrt) const
{
	if (!this->isSigned())
		throw Form::FormNotSigned();
	if (brcrt.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();

	std::ofstream	ofs;

	ofs.open(this->getTarget() + "_shrubbery", std::ios::out | std::ios::trunc);
	ofs << "\
               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
	ofs.close();
}