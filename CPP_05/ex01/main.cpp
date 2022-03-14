#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	sam("sam", 27);
	Bureaucrat	ozzie("ozzie", 13);
	Form		form("form", 17, 25);

	std::cout << sam << ozzie << form << '\n';

	sam.signForm(form);
	std::cout << form << '\n';
	ozzie.signForm(form);
	std::cout << form << '\n';

	try
	{
		Form	form2("form2", 0, 25);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form	form3("form3", 2, 176);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form	form4("form4", 175, 25);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form	form5("form5", 17, -4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}