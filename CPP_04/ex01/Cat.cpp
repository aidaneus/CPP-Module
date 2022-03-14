#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &ref) : Animal(ref) 
{
	std::cout << "Copy Cat" << std::endl;
	this->operator=(ref);
}

Cat::~Cat() 
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const 
{
	std::cout << "The Cat says 'Meowww'!" << std::endl;
}

Cat & Cat::operator=(const Cat &ref)
{
	this->_brain = new Brain();
	this->_type = ref.getType();
	for(int i = 0; i < 100; i++)
		this->_brain->getIdeas()[i] = ref._brain->getIdeas()[i];
	return *this;
}