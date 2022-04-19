#include "Span.hpp"
#include <iostream>

int	main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span	minSpan(1);

	try
	{
		minSpan.addNumber(21);
		minSpan.addNumber(42);
	}
	catch (const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		minSpan.shortestSpan();
	}
	catch (const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		minSpan.longestSpan();
	}
	catch (const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	Span				bigSpan(10000);
	std::vector<int>	vector;

	srand(time(NULL));
	for (int i = 0; i < 10000; ++i)
		vector.push_back(rand());

	bigSpan.addNumber(vector.begin(), vector.end());

	std::cout << bigSpan.shortestSpan() << std::endl;
	std::cout << bigSpan.longestSpan() << std::endl;

	return (0);
}