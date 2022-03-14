#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec):
	name(name), gradeSign(grade_sign), gradeExecute(grade_exec), sign(false)
{
	if (grade_sign < 1)
		throw Form::GradeTooHighException();
	if (grade_sign > 150)
		throw Form::GradeTooLowException();
	if (grade_exec < 1)
		throw Form::GradeTooHighException();
	if (grade_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const& form):
	name(form.name),
	gradeSign(form.gradeSign),
	gradeExecute(form.gradeExecute),
	sign(form.sign)
{}

Form::~Form() {}

Form&	Form::operator=(Form const& form)
{
	this->sign = form.sign;
	return (*this);
}

std::string const&	Form::getName(void) const
{
	return (this->name);
}

int const&			Form::getGradeSign(void) const
{
	return (this->gradeSign);
}

int const&			Form::getGradeExecute(void) const
{
	return (this->gradeExecute);
}

bool const&			Form::isSigned(void) const
{
	return (this->sign);
}

void				Form::beSigned(Bureaucrat const& brcrt)
{
	if (brcrt.getGrade() > this->gradeSign)
		throw (Form::GradeTooLowException());
	this->sign = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\033[22;31mthe grade is too high\033[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\033[2;31mthe grade is too low\033[0m");
}

std::ostream&	operator<<(std::ostream& os, Form const& form)
{
	os << "<" << form.getName() << "> requires a grade of " << form.getGradeSign() \
	<< " grade to be signed and a grade of " << form.getGradeExecute() << \
	" to be executed, and it is ";
	if (form.isSigned() == false)
		os << "not ";
	os << "signed.\n";
	return (os);
}
