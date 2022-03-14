#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade):
	name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& brcrt):
	name(brcrt.name), grade(brcrt.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& brcrt)
{
	this->grade = brcrt.grade;
	return (*this);
}

std::string const&	Bureaucrat::getName(void) const
{
	return (this->name);
}

int const&	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::upGrade(void)
{
	std::cout << "Try incrementation.\n";
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::downGrade(void)
{
	std::cout << "Try decrementation.\n";
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& brcrt)
{
	os << '<' << brcrt.getName() << ">, bureaucrat grade <" << brcrt.getGrade() << ">\n";
	return (os);
}
