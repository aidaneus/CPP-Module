#include "Zombie.hpp"

int	main()
{
	randomChump("Ozzie");
	randomChump("Ed");
	Zombie *new_zombie = newZombie("Jerome");
	new_zombie->announce();
	delete new_zombie;
}