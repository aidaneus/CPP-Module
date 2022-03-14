#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &ref);
		virtual ~DiamondTrap(void);
	
		DiamondTrap &		operator=(const DiamondTrap &ref);

		void				attack(std::string const & target);
		void				whoAmI(void);

	private:
		std::string			_name;

};

#endif