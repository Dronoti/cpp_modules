#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &cont, int val)
{
	typename T::iterator found = std::find(cont.begin(), cont.end(), val);
	if (found != cont.end())
		return (found);
	else
		throw "Not found";
}

#endif
