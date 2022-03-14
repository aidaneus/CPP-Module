#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

class	contact
{
public:
	void	delete_contact(void);
	void	print_short_contact(int index);
	void	print_contact(int index);
	void	add_contact(void);

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

void	reset_contact(contact *phonebook, int *contact_num);
void	eof_bye(void);
void	search_contact(contact *phonebook, int contact_num);

#endif
