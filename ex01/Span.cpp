#include "Span.hpp"

Span::Span()
{
	this->_vec.reserve(0);
}

Span::Span(unsigned int N)
{
	this->_vec.reserve(N);
}

Span::~Span()
{
	this->_vec.clear();
}

Span::Span(const Span &src)
{
	std::vector<int>::const_iterator strt = src._vec.begin();
	std::vector<int>::const_iterator end = src._vec.end();
	for(;strt != end; ++strt)
	{
		this->_vec.push_back(*strt);
	}
}

Span &Span::operator=(const Span &src)
{
	std::vector<int>::const_iterator strt = src._vec.begin();
	std::vector<int>::const_iterator end = src._vec.end();
	for(;strt != end; ++strt)
	{
		this->_vec.push_back(*strt);
	}
	return (*this);
}

void Span::addNumber(int k)
{
	if(this->_vec.size()+1 <= this->_vec.capacity())
	{
		this->_vec.push_back(k);
	}
}

void Span::addFromRange(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
	if(static_cast<unsigned long>(std::distance(beg, end)) > this->_vec.capacity()-this->_vec.size())
	{
		throw NotEnoughSpaceException();
	}
	std::copy(beg, end, std::back_inserter(this->_vec));
}

int Span::shorestSpan()
{
	if(this->_vec.size() < 2)
		throw NotEnoughElementsException();
	std::vector<int> tmp(this->_vec);
	std::sort(tmp.begin(), tmp.end());

	std::vector<int>::const_iterator it =tmp.begin();
	std::vector<int>::const_iterator itend = tmp.end();
	int min = abs(tmp[1] - tmp[0]);
	for(;(it+1) != itend; it++)
	{
		int tmp = abs(*it - *(it+1));
		if(tmp< min)
			min = tmp;
	}
	return min;
}

int Span::longestSpan() const
{
	if(this->_vec.size() < 2)
		throw NotEnoughElementsException();
	return (*std::max_element(this->_vec.begin(), this->_vec.end())\
	- *std::min_element(this->_vec.begin(), this->_vec.end()));
}

const char *Span::NotEnoughElementsException::what() const throw()
{
	return "The Span has not enough elements";
}

const char *Span::NotEnoughSpaceException::what() const throw()
{
	return "The Span has not enough space to insert elements";
}