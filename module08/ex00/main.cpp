#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <iostream>

int main()
{
	int 				n = 12;
	std::list<int>		list;
	std::deque<int>		deque;
	std::vector<int>	vector;

	for (int i = 0; i < n; ++i)
	{
		list.push_back(i);
		deque.push_back(i);
		vector.push_back(i);
	}

	std::cout << "List: ";
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Search: 10" << std::endl;
	std::list<int>::iterator listFind = easyfind(list, 10);
	std::cout << "Found: " << *listFind << std::endl << std::endl;

	std::cout << "Deque: ";
	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Search: 5" << std::endl;
	std::deque<int>::iterator dequeFind = easyfind(deque, 5);
	std::cout << "Found: " << *dequeFind << std::endl << std::endl;

	try
	{
		std::cout << "Vector: ";
		for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;

		std::cout << "Search: 100" << std::endl;
		std::vector<int>::iterator vectorFind = easyfind(vector, 100);
		std::cout << "Found: " << *vectorFind << std::endl;
	}
	catch (const char *msg)
	{
		std::cout << msg << std::endl;
	}

	return (0);
}