#include "Span.hpp"

#define RED       "\e[1;31m"
#define GREEN     "\e[1;32m"
#define CLR_COLOR "\e[0m"


int	main(void)
{
	Span	sp = Span(5);
	Span	lst(0, 10);
	Span	large(0, 100000); 

	std::cout << GREEN "List #1: " CLR_COLOR << std::endl;
	std::cout << "The list is empty: " << sp << std::endl;
	
	try
	{
		sp.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << RED "Error: " CLR_COLOR << e.what() << std::endl;
	}

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	try
	{
		sp.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << RED "Error: " CLR_COLOR << e.what() << std::endl;
	}

	std::cout << sp << std::endl;
	std::cout << "Shortest span: [" GREEN << sp.shortestSpan() << CLR_COLOR "]" << std::endl;
	std::cout << "Longest span:  [" GREEN << sp.longestSpan() << CLR_COLOR "]" << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "List #2: " CLR_COLOR << std::endl;
	std::cout << lst << std::endl;
	std::cout << "Shortest span: [" GREEN << lst.shortestSpan() << CLR_COLOR "]" << std::endl;
	std::cout << "Longest span:  [" GREEN << lst.longestSpan() << CLR_COLOR "]" << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "List #3: " CLR_COLOR << std::endl;
	std::cout << "Shortest span: [" GREEN << large.shortestSpan() << CLR_COLOR "]" << std::endl;
	std::cout << "Longest span:  [" GREEN << large.longestSpan() << CLR_COLOR "]" << std::endl;
	
	return 0;
}
