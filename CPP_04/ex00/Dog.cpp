#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &ref) : Animal(ref) {};

Dog::~Dog() 
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "The Dog says 'Woof'!" << std::endl;
}

Dog & Dog::operator = (const Dog &ref)
{
	if (this == &ref)
		return (*this);
	this->_type = ref.getType();
	return (*this);
}