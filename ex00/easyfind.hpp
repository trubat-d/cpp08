#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>

class NotFoundException : public std::exception
{
public:
	const char * what() const throw();
};

template<typename T>
typename T::iterator easyfind(T &val, int const n)
{
	typename T::iterator _iter= std::find(val.begin(), val.end(), n);
	if(_iter == val.end())
		throw NotFoundException();
	return (std::find(val.begin(), val.end(), n));
}

#endif //CPP_EASYFIND_HPP
