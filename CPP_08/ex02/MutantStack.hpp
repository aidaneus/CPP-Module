#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stdint.h>
# include <cstdlib>
# include <algorithm>
# include <map>
# include <list>
# include <stack>
# include <vector>
# include <numeric>

template<typename T>
class MutantStack : public std::stack<T>
{
	
	public:
		MutantStack<T>(void);
		MutantStack<T>(MutantStack const &);
		~MutantStack<T>();
	
		MutantStack &	operator=(MutantStack const &);

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end()   { return this->c.end(); }

};

template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &ref) : std::stack<T>(ref)
{}

template<typename T>
MutantStack<T>::~MutantStack()
{}

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack const &ref)
{
	if (this != &ref)
		return *this;

	std::stack<T>::operator=(ref);
	return *this;
}

#endif
