#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	_name = str;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " is dead." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}