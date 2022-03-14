#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <stack>
#include <vector>

template<typename T>
bool	easyfind(T container, int val)
{
	return (*std::find(container.begin(), container.end(), val) == val);
}
