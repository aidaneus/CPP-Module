#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) 
{
	std::cout << "Animal string called" << std::endl;
};


Animal::Animal(const Animal &ref)
{
	*this = ref;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string		Animal::getType(void) const { return this->_type; }

void	Animal::makeSound(void) const
{
	std::cout << "An Animal cannot talk!" << std::endl;
}

Animal &		Animal::operator=(const Animal &ref)
{
	
	if (this == &ref)
		return *this;
	this->_type = ref.getType();
	return *this;
}