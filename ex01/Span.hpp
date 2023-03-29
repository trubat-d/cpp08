#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
public:
	Span(const Span &src);
	Span(unsigned int N);
	virtual ~Span();
	void	addNumber(int k);
	void	addFromRange(std::vector<int>::iterator beg, std::vector<int>::iterator end);
	int		shorestSpan(void);
	int		longestSpan(void) const;
	Span &operator=(const Span &src);
	class NotEnoughElementsException: public std::exception
	{
		const char * what() const throw();
	};
	class NotEnoughSpaceException: public std::exception
	{
		const char * what() const throw();
	};
private:
	Span();
	std::vector<int>	_vec;
};


#endif //CPP_SPAN_HPP
