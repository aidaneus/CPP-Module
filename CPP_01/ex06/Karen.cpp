#include "Karen.hpp"

void Karen::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				 "I just love it!" << std::endl;
}

void Karen::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon cost more money. "
				 "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I’ve  been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int index = 0;
	while (levels[index] != level && index < 4)
		index++;

	switch (index)
	{
	case 0:
		debug();
		std::cout << std::endl;
		break;
	case 1:
		info();
		std::cout << std::endl;
		break;
	case 2:
		warning();
		std::cout << std::endl;
		break;
	case 3:
		error();
		std::cout << std::endl;
		break;
	default:
		std::cout << "It's something else.\n";
		break;
	}
}