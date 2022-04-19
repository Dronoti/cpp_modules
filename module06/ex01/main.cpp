#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data 		data;
	Data		*newData;
	uintptr_t	raw;

	data.name = "Gump";
	data.i = 42;
	data.c = 'A';

	raw = serialize(&data);
	newData = deserialize(raw);

	std::cout << "Original Data" << std::endl;
	std::cout << "Name: " << data.name << std::endl;
	std::cout << "i: " << data.i << std::endl;
	std::cout << "c: " << data.c << std::endl << std::endl;

	std::cout << "New Data" << std::endl;
	std::cout << "Name: " << newData->name << std::endl;
	std::cout << "i: " << newData->i << std::endl;
	std::cout << "c: " << newData->c << std::endl;

	return (0);
}