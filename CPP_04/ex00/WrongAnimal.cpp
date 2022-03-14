#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") 
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal string called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	*this = ref;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &ref)
{
	if (this == &ref)
		return *this;
	this->_type = ref.getType();
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << getType() << " says wrong sound" << std::endl;
}