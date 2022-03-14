#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &ref);
		~FragTrap(void);
	
		FragTrap &		operator=(const FragTrap &ref);

		virtual void	setHitPoints(void);
		virtual void	setEnergyPoints(void);
		virtual void	setAttackDamage(void);

		virtual void	attack(std::string const & target);

		void			highFivesGuys(void);
	
};

#endif