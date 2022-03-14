# include <iostream>
# include <cstdlib>

template<typename T>
void	iter(T ar[], size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; ++i)
	{
		(*f)(ar[i]);
	}
}

template<typename T>
void	print(T &a)
{
	std::cout << a << std::endl;
}
