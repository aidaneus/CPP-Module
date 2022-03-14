#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	Animal* animal[10];

	for(int i = 0; i < 10; i++)
	{
		if (i < 5)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		animal[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete animal[i];
	
	std::cout << std::endl;
	std::cout << std::endl;

	Cat a;
	{
		Cat b = a;
	}
	std::cout << "The end" << std::endl;

	return (0);
}