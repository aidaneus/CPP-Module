#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &ref);
		virtual ~Cat();
		Cat &		operator=(const Cat &ref);

		virtual void	makeSound() const;
		Brain* getBrain() const;
		private:
			Brain* _brain;
};

#endif