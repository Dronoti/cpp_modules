#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>
# include <algorithm>

class Span
{
private:
	std::vector<int>	_arr;
	unsigned int		_N;
public:
	Span();
	Span(unsigned int N);
	Span(const Span &span);
	~Span();
	Span	&operator=(const Span &span);
	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();

	template <typename it>
	void	addNumber(it begin, it end)
	{
		while (begin != end)
		{
			this->addNumber(*begin);
			begin++;
		}
	}
};

#endif
