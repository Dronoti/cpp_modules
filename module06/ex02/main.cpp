#include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate(void)
{
	int rand = std::rand() % 3;

	if (rand == 0)
	{
		std::cout << "Сreated class A" << std::endl;
		return (new A);
	}
	else if (rand == 1)
	{
		std::cout << "Сreated class B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Сreated class C" << std::endl;
		return (new C);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	Base	base;

	try
	{
		base = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception)
	{
	}
	try
	{
		base = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception)
	{
	}
	try
	{
		base = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::exception)
	{
	}
}

int	main()
{
	int		n = 5;
	Base	*base;

	std::srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		base = generate();
		Base &refBase = *base;
		identify(base);
		identify(refBase);
		std::cout << std::endl;
		delete base;
	}
	return (0);
}