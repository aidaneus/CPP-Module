#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void) {
	
	ScavTrap	scav("Scav");
	ClapTrap	franck("Franck");
	FragTrap	frog("Frog");

	franck.attack("No name");
	franck.takeDamage(10);
	franck.beRepaired(100);
	franck.takeDamage(100);
	franck.takeDamage(10);
	franck.beRepaired(10);
	scav.attack("No name");
	scav.guardGate();
	scav.takeDamage(100);
	scav.guardGate();
	scav.beRepaired(50);
	scav.takeDamage(100);
	scav.guardGate();
	frog.highFivesGuys();
	frog.takeDamage(100);
	frog.takeDamage(100);

	return 0;
}