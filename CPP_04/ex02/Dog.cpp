#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &ref) : Animal(ref) 
{
	std::cout << "Copy Dog" << std::endl;
	this->operator=(ref);
}

Dog::~Dog() 
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "The Dog says 'Woof'!" << std::endl;
}

Dog & Dog::operator = (const Dog &ref)
{
	this->_brain = new Brain();
	this->_type = ref.getType();
	for(int i = 0; i < 100; i++)
		this->_brain->getIdeas()[i] = ref._brain->getIdeas()[i];
	return *this;
}