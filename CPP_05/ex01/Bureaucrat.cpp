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

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << '<' << this->name << "> signs <" << form.getName() << ">\n";
	}
	catch (std::exception& e)
	{
		std::cerr << '<' << this->name << "> cannot sign <" << form.getName() \
		<< "> because <" << e.what() << ">.\n";
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[2;31mGrade too high.\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[2;31mGrade too low.\033[0m");
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& brcrt)
{
	os << '<' << brcrt.getName() << ">, bureaucrat grade <" << brcrt.getGrade() << ">\n";
	return (os);
}
