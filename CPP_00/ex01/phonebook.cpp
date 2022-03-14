#include "phonebook.hpp"

void	contact::delete_contact(void)
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

void	reset_contact(contact *phonebook, int *contact_num)
{
	std::cout << "My Awesome Phonebook is full! \
	My Awesome Phonebook is erasing the first contact" << std::endl;
	for (int i = 1; i < 7; i++)
		phonebook[i - 1] = phonebook[i];
	*contact_num = 7;
	phonebook[7].delete_contact();
	return ;
}

void	contact::add_contact(void)
{
	std::string	name;
	std::string	input;

	std::cout << "To add a contact, \
please type in the following information.\n\
Type in the first name of the new contact." << std::endl;
	std::getline(std::cin, name);
	eof_bye();
	first_name = name;
	std::cout << "Type in last name." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	last_name = input;
	std::cout << "Type in nickname." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	nickname = input;
	std::cout << "Type in phone number" << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	phone_number = input;
	std::cout << "Type in darkest secret." << std::endl;
	std::getline(std::cin, input);
	eof_bye();
	darkest_secret = input;
	std::cout << "You successfully typed in all the fields of a contact of My Awesome Phonebook." << std::endl;
	return ;
}
