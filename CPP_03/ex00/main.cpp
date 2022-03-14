#include "ClapTrap.hpp"
#include <iostream>

int	main(void) {
	
	ClapTrap	unknown;
	ClapTrap	ozzie("Ozzie");
	ClapTrap	eddie("Eddie");

	ozzie.attack(unknown.getName());
	ozzie.attack(eddie.getName());
	ozzie.takeDamage(10);
	ozzie.beRepaired(10);
	ozzie.takeDamage(20);
	ozzie.beRepaired(10);

	return 0;
}