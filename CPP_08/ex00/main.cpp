#include "easyfind.hpp"

#define RED       "\e[1;31m"
#define GREEN     "\e[1;32m"
#define CLR_COLOR "\e[0m"

template<typename T>
void	try2find(T &container, int val)
{
	bool	tst = easyfind(container, val);

	if (tst) std::cout << "[" << val << "] -> " GREEN "found" CLR_COLOR;
	else     std::cout << "[" << val << "] -> " RED "not found" CLR_COLOR;
	
	std::cout << std::endl;
}

int	main(void)
{
	std::list<int>		lst;
	std::vector<int>	vec;
	std::deque<int>		deck;

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);


	deck.push_back(1);
	deck.push_back(2);
	deck.push_back(3);

	std::cout << "List:" << std::endl;
	try2find(lst, -10);
	try2find(lst, 2);
	try2find(lst, 42);
	std::cout << std::endl;

	std::cout << "Vector:" << std::endl;
	try2find(vec, -10);
	try2find(vec, 2);
	try2find(vec, 42);
	std::cout << std::endl;
	
	std::cout << "Deque:" << std::endl;
	try2find(deck, -10);
	try2find(deck, 2);
	try2find(deck, 42);
	
	return 0;
}
