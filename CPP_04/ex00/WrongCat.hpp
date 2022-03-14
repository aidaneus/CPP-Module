#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:
		WrongCat();
		// WrongCat(std::string type);
		WrongCat(const WrongCat &ref);
		virtual ~WrongCat();
		WrongCat & operator=(const WrongCat &ref);
	
};

#endif