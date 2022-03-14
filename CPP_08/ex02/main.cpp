#include <iostream>
#include "MutantStack.hpp"

#define GREEN     "\e[1;32m"
#define CLR_COLOR "\e[0m"


int	main(void)
{
	std::cout << GREEN "# MutantStack Tests:" CLR_COLOR << std::endl;
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);
		
		std::cout << "top:  [" GREEN << mstack.top() << CLR_COLOR "]" << std::endl;
		mstack.pop();
		std::cout << "size: [" GREEN << mstack.size() << CLR_COLOR "]" << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int>		s(mstack);
	}

	std::cout << GREEN "# List Tests:" CLR_COLOR << std::endl;
	{
		std::list<int>		lst;

		lst.push_back(5);
		lst.push_back(17);
	
		std::cout << "top:  [" GREEN << lst.back() << CLR_COLOR "]" << std::endl;
		lst.pop_back();
		std::cout << "size: [" GREEN << lst.size() << CLR_COLOR "]" << std::endl;

		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(0);

		std::list<int>::iterator	it = lst.begin();
		std::list<int>::iterator	ite = lst.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	
	return 0;
}
