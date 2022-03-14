#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ref);
		virtual ~ClapTrap();
	
		ClapTrap &		operator=(const ClapTrap &ref);

		std::string		getName(void) const;
		int				getHitPoints(void) const;
		int				getEnergyPoints(void) const;
		int				getAttackDamage(void) const;

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