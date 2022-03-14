#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ref);
		virtual ~ScavTrap(void);
	
		ScavTrap &		operator=(const ScavTrap &ref);

		virtual void	setHitPoints(void);
		virtual void	setEnergyPoints(void);
		virtual void	setAttackDamage(void);

		virtual void	attack(std::string const & target);

		void			guardGate(void) const;
	
};

#endif