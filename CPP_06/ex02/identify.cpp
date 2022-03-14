#include "identify.hpp"

Base*	generateBase(void)
{
	int	pick = rand() % 3;

	if (pick == 0)
		return (new A);
	else if (pick == 1)
		return (new B);
	return (new C);
}

void	identify_from_pointer(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B\n";
	else
		std::cout << "C\n";
	return ;
}

void	identify_from_reference(Base& p)
{
	// identify_from_pointer(&p);
	Base b;
    try
    { 
        b = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception &e) {}
    try
    { 
        b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch (const std::exception &e) {}
    try
    { 
        b = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (const std::exception &e) {}
}