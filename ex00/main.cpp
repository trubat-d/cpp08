#include "easyfind.hpp"

const char * NotFoundException::what() const throw()
{
	return ("The value you are trying to look for cannot be resolved");
}

void showVal(int val)
{
	std::cout << "value : " << val << std::endl;
}

int main(int ac, char **av)
{
	{
		std::vector<int> _vec;
		for(int i = 0; i < 10; i++)
		{
			_vec.push_back(i);
		}
		std::cout <<  "Values in vector : " << std::endl;
		std::for_each(_vec.begin(), _vec.end(), showVal);
		try {
			if(ac == 2)
				std::cout <<  "Value found : " << *(easyfind(_vec, std::atoi(av[1]))) << std::endl;
			else
				std::cout <<  "Value 5 found : " << *(easyfind(_vec, 5)) << std::endl;
			std::cout <<  "Value 20 found : " << *(easyfind(_vec, 20)) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::list<int> _vec;
		for(int i = 0; i < 10; i++)
		{
			_vec.push_back(i);
		}
		std::cout <<  "Values in vector : " << std::endl;
		std::for_each(_vec.begin(), _vec.end(), showVal);
		try {
			if(ac == 2)
				std::cout <<  "Value found : " << *(easyfind(_vec, std::atoi(av[1]))) << std::endl;
			else
				std::cout <<  "Value 5 found : " << *(easyfind(_vec, 5)) << std::endl;
			std::cout <<  "Value 20 found : " << *(easyfind(_vec, 20)) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}