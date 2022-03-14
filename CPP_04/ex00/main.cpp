#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();		// will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal	*s = new WrongAnimal();
	const WrongAnimal	*l = new WrongCat();
	std::cout << s->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	s->makeSound();
	l->makeSound();

	delete l;
	delete s;

	return 0;
}