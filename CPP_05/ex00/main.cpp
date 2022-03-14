#include "Bureaucrat.hpp"

void	test_bureaucrat(std::string name, int grade)
{
	try
	{
		std::cout << "\nname: " << name << "\n\tgrade: " << grade << '\n';
		Bureaucrat	bureaucrat(name, grade);

		std::cout << "getName: " << bureaucrat.getName() << '\n';
		std::cout << bureaucrat;
		bureaucrat.upGrade();
		std::cout << bureaucrat;
		bureaucrat.downGrade();
		std::cout << bureaucrat;
		bureaucrat.downGrade();
		std::cout << bureaucrat;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	main()
{

	test_bureaucrat("sam", 25);
	test_bureaucrat("rick", 1);
	test_bureaucrat("morty", 150);
	test_bureaucrat("harry", 0);
	test_bureaucrat("kim", -32);
	test_bureaucrat("oswald", 175);
	test_bureaucrat("ed", 172145);
}