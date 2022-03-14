#include "phonebook.hpp"

void	eof_bye(void)
{
	if(std::cin.eof())
	{
		std::cout << "Bye." << std::endl;
		exit(1);
	}
}

int	main()
{
	std::string	input;
	contact	phonebook[8];
	int		num;

	num = 0;
	std::cout << "\033[35mWelcome to My Awesome Phonebook." << std::endl;
	std::cout << "Please choose a command.\n(ADD, SEARCH OR EXIT)" << std::endl;
	while (1)
	{
		std::getline(std::cin, input);
		eof_bye();
		if (!input.compare("EXIT"))
		{
			std::cout << "Thank you for using My Awesome Phonebook." << std::endl;
			return (0);
		}
		else if (!input.compare("ADD"))
		{
			if (num == 8)
			{
				reset_contact(phonebook, &num);
			}
			else
				phonebook[num++].add_contact();
		}
		else if (!input.compare("SEARCH"))
			search_contact(phonebook, num);
	}
	return (0);
}
