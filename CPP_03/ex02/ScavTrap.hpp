#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ref);
		~ScavTrap(void);
	
		ScavTrap &		operator=(const ScavTrap &ref);

		void			guardGate(void) const;
	
};

#endif