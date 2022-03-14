#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &ref) : Animal(ref) {};

Cat::~Cat() 
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const 
{
	std::cout << "The Cat says 'Meowww'!" << std::endl;
}

Cat & Cat::operator=(const Cat &ref)
{
	if (this == &ref)
		return *this;
	this->_type = ref.getType();
	return *this;
}