#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal 
{
	public:
		Dog();
		Dog(const Dog &ref);
		virtual ~Dog();
		Dog &		operator=(const Dog &ref);

		virtual void	makeSound() const;
};

#endif