#include "Zombie.hpp"

Zombie::Zombie(void) {};

Zombie::~Zombie(void)
{
	std::cout << _name << " died..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}