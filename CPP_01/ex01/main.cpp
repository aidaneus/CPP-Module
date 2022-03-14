#include "Zombie.hpp"
#include <iostream>
#include <ctime>

int	main()
{
    Zombie *zombies = zombieHorde(5, "Ed");
    for (int i = 0; i < 5; ++i)
        zombies[i].announce();
    delete [] zombies;
    return 0;
}