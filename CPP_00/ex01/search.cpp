#include "phonebook.hpp"

static std::string	get_short(std::string str)
{
	std::string	new_str;

	new_str = "";
	if (str.length() <= 10)
	{
		for (int i = 0; i < 10 - (int)str.length(); i++)
			new_str += ' ';
		new_str += str + '|';
	}
	else
		new_str += str.substr(0, 9) + ".|";
	return (new_str);
}

void	contact::print_short_contact(int index)
{
	std::cout << "|         " << index << '|' \
		<< get_short(first_name)
		<< get_short(last_name)
		<< get_short(nickname) << '\n';
}

void	contact::print_contact(int index)
{
	std::cout << "Here is the information of the index number " << index << "." << std::endl;
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

void	search_contact(contact *phonebook, int contact_num)
{
	if (contact_num == 0)
	{
		std::cout << "No contact at all!" << std::endl;
		return ;
	}
	std::cout << "/-------------------------------------------\\\n";
	std::cout << "|     index|first name| last name|  nickname|\n";
	if (contact_num >= 1)
		std::cout << "|----------+----------+----------+----------|\n";
	for (int i = 0; i < contact_num; i++)
		phonebook[i].print_short_contact(i);
	std::cout << "\\-------------------------------------------/" << std::endl;

	int			index;
	std::string	dump;

	std::cin >> index;

	if (std::cin.eof() || !std::cin || index >= contact_num)
	{
		std::cin.clear();
		std::cout << "Wrong input. You failed to search." << std::endl;
		std::cin >> dump;
		return ;
	}
	else if (index >= contact_num)
	{
		std::cout << "Wrong input. You failed to search." << std::endl;
		return ;
	}
	phonebook[index].print_contact(index);
	return ;
}