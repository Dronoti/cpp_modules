#include "MutantStack.hpp"
#include <iostream>

int	main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	MutantStack<int>	newStack;
	int 				n = 5;

	srand(time(NULL));
	for (int i = 0; i < n; ++i)
		newStack.push(rand());

	MutantStack<int>::iterator	itNew = newStack.begin();

	std::cout << "New Stack: ";
	for ( ; itNew != newStack.end(); ++itNew)
		std::cout << *itNew << " ";
	std::cout << std::endl;

	--itNew;
	--itNew;
	*itNew = 999;

	itNew = newStack.begin();
	std::cout << "Changed Stack: ";
	for ( ; itNew != newStack.end(); ++itNew)
		std::cout << *itNew << " ";
	std::cout << std::endl;

	return 0;
}
