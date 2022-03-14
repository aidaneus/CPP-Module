#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void) {
	
	DiamondTrap	bob("bob");
	DiamondTrap	bob_cpy;

	bob_cpy.whoAmI();
	bob_cpy = DiamondTrap("new");
	bob_cpy.whoAmI();

	bob.whoAmI();
	bob.highFivesGuys();
	bob.guardGate();
	bob.takeDamage(100);
	bob.attack("bosby");
	bob.takeDamage(50);
	bob.beRepaired(0);

	return 0;
}