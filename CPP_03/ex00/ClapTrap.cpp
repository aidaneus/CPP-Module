#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("{No name}"),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0) {
	return ;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0) {
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &ref) {
	*this = ref;
}

ClapTrap::~ClapTrap(void) {
	return ;
}

ClapTrap &		ClapTrap::operator=(const ClapTrap &ref) {
	
	if (this == &ref)
		return *this;
	
	this->_name = ref._name;
	this->_hit_points = ref._hit_points;
	this->_energy_points = ref._energy_points;
	this->_attack_damage = ref._attack_damage;
	return *this;
}


std::string		ClapTrap::getName(void) const { return this->_name; }

void		ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->getName() \
			  << " attacks " << target \
			  << ", causing " << ClapTrap::_attack_damage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) 
{

	if ((int)amount > this->_energy_points) 
	{
		this->_hit_points -= ((int)amount - this->_energy_points);
		this->_energy_points = 0;
	} 
	else 
	{
		this->_energy_points -= amount;
	}
	
	if (this->_hit_points <= 0 && this->_energy_points <= 0) 
	{
		std::cout << "ClapTrap " << this->getName() \
				  << " takes " << amount << " points of damage and it dies!" << std::endl;
	}
	else 
	{
		std::cout << "ClapTrap " << this->getName() \
				  << " takes " << amount << " points of damage!" << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount) {

	if (this->_hit_points <= 0 && this->_energy_points <= 0) {
		
		std::cout << "ClapTrap " << this->getName() \
				  << " cannot be restored, it died tragically ..." << std::endl;
		return ;
	}

	if ((this->_hit_points + amount) > 10) {
		this->_energy_points += this->_hit_points - 10 + amount;
		this->_hit_points = 10;
	} else {
		this->_hit_points = amount;
	}

	if (this->_hit_points >= 10 &&
		this->_energy_points >= 10) {

		std::cout << "ClapTrap " << this->getName() \
				  << " restored completely!" << std::endl;
	} else {

		std::cout << "ClapTrap " << this->getName() \
				  << " restored " << amount << " points!" << std::endl;
	}
}