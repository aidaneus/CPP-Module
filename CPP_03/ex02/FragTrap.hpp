#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &ref);
		~FragTrap(void);
	
		FragTrap &		operator=(const FragTrap &ref);

		void			highFivesGuys(void);
	
};

#endif