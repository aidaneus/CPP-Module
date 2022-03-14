#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	public:
		Animal(void);
		Animal(const Animal &ref);
		virtual ~Animal(void);
		Animal &		operator=(const Animal &ref);
	
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		Animal(std::string type);

	protected:
		std::string		_type;

};

#endif