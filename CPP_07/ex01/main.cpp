#include <iostream>
#include "iter.hpp"

// class Awesome
// {
// public:
// Awesome( void ): _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template<typename T >
// void print( T const & x) { std::cout << x << std::endl; return; }
// int main() {
// int tab[] = { 0, 1, 2, 3, 4 }; // <--- ever understood why you can't write int[] tab. Wouldn't that make more sense?
// Awesome tab2[5];
// iter( tab, 5, print );
// iter( tab2, 5, print);
// return (0);
// }

int	main(void)
{
	int		ar[10];
	
	for (size_t i = 0; i < 10; ++i)
		ar[i] = i;
	
	iter(ar, 10, print);

	return 0;
}
