#include "Span.hpp"

Span::Span(): _N(0)
{
	this->_arr.reserve(0);
}

Span::Span(unsigned int N): _N(N)
{
	this->_arr.reserve(N);
}

Span::Span(const Span &span)
{
	this->_N = span._N;
	this->_arr.reserve(span._arr.capacity());
	this->_arr = span._arr;
}

Span::~Span() {}

Span	&Span::operator=(const Span &span)
{
	this->_N = span._N;
	this->_arr.reserve(span._arr.capacity());
	this->_arr = span._arr;

	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_arr.size() == this->_N)
		throw std::overflow_error("Span is full, item cannot be added");
	this->_arr.push_back(num);
}

int		Span::shortestSpan()
{
	std::vector<int>::iterator 	it;
	std::vector<int>::iterator 	it2;
	int min = std::numeric_limits<int>::max();

	if (this->_arr.size() < 2)
		throw std::logic_error("Span must have at least 2 elements");
	for (it = this->_arr.begin(); it != this->_arr.end(); ++it)
	{
		for (it2 = this->_arr.end(); it2 != it; --it2)
		{
			if (min > std::abs(*it - *it2))
				min = std::abs(*it - *it2);
		}
	}
	return (min);
}

int		Span::longestSpan()
{
	if (this->_arr.size() < 2)
		throw std::logic_error("Span must have at least 2 elements");
	return (*std::max_element(this->_arr.begin(), this->_arr.end())
	- *std::min_element(this->_arr.begin(), this->_arr.end()));
}
