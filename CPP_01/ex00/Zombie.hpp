#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
#include <iostream>

class	Zombie
{
private:
	std::string _name;

public:
	void announce(void);
	~Zombie(void);
	Zombie(std::string str);
};

Zombie *newZombie(std::string str);
void randomChump(std::string str);

#endif
