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

void	Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << '<' << this->name << "> cannot execute <" << form.getName() \
		<< ">:" << form.getTarget() << " because <" << e.what() << ">.\n";
		return ;
	}
	std::cout << '<' << this->name << "> executes <" << form.getName() << ">:" \
	<< form.getTarget() << ".\n";
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
