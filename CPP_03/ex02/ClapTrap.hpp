#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hit_points, int energy_points, int attack_damage);
		ClapTrap(const ClapTrap &ref);
		~ClapTrap();
	
		ClapTrap &		operator=(const ClapTrap &ref);

		std::string		getName(void) const;

		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	
	protected:
		std::string			_name;
		int					_hit_points;
		int					_energy_points;
		int					_attack_damage;
	
};

#endif