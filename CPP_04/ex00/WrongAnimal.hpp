#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &ref);
		virtual ~WrongAnimal();
		WrongAnimal & operator=(const WrongAnimal &ref);

		WrongAnimal(std::string type);
		virtual void				makeSound() const;
		std::string			getType() const;

	protected:
		std::string			_type;

};

#endif