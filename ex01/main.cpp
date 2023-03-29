#include "Span.hpp"

int main(void)
{
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try {
			std::cout << sp.shorestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp = Span(10000);
		for(int i = 1; i <= 10000; i++)
		{
			sp.addNumber(i);
		}

		try {
			std::cout << sp.shorestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp = Span(100000);
		for(int i = 1; i <= 100000; i+=2)
		{
			sp.addNumber(i);
		}

		try {
			std::cout << sp.shorestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp = Span(500);
		std::vector<int> tmp;
		for(int i = 1; i <= 400; i+=10)
		{
			tmp.push_back(i);
		}

		try {
			sp.addFromRange(tmp.begin(), tmp.end());
			std::cout << sp.shorestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp = Span(500);
		std::vector<int> tmp;
		for(int i = 1; i <= 4000; i+=1)
		{
			tmp.push_back(i);
		}

		try {
			sp.addFromRange(tmp.begin(), tmp.end());
			std::cout << sp.shorestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	return (0);
}