#include "identify.hpp"
#include <ctime>
#include <unistd.h>

int main(void)
{
    Base *o;
	for (int i = 0; i < 10; i++)
	{
        if ((o = generateBase()) == NULL)
            return (0);
	//	Base *o = generate();
		std::cout << "Test " << i << ": ";
		identify_from_pointer(o);
		std::cout << ", ";
		identify_from_reference(*o);
		std::cout << std::endl;
		delete o;
        sleep (1);
	}

	return (0);
}