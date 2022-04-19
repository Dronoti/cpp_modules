#include "Array.hpp"

int	main(void)
{
	Array<char>	arrChar(4);
	Array<int>	arrInt(5);
	Array<int>	arrEmpty;

	for (unsigned int i = 0; i < arrChar.size(); i++)
		arrChar[i] = 'a' + i;

	for (unsigned int i = 0; i < arrInt.size(); i++)
		arrInt[i] = i;

	Array<int>	arrCopy(arrInt);

	std::cout << arrChar << std::endl;
	std::cout << arrInt << std::endl;
	std::cout << arrCopy << std::endl;
	std::cout << "arrEmpty size: " << arrEmpty.size() << std::endl;
	std::cout << arrEmpty << std::endl;

	try
	{
		std::cout << arrChar[20] << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		std::cout << arrInt[-1] << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}

//#include "Array.hpp"
//
//#define MAX_VAL 750
//
//int	main(int, char**)
//{
//	Array<int> numbers(MAX_VAL);
//	int* mirror = new int[MAX_VAL];
//	srand(time(NULL));
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		const int value = rand();
//		numbers[i] = value;
//		mirror[i] = value;
//	}
//	//SCOPE
//	{
//		Array<int> tmp = numbers;
//		Array<int> test(tmp);
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		if (mirror[i] != numbers[i])
//		{
//			std::cerr << "didn't save the same value!!" << std::endl;
//			return 1;
//		}
//	}
//	try
//	{
//		numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//	try
//	{
//		numbers[MAX_VAL] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		numbers[i] = rand();
//	}
//	delete [] mirror;
//
//	return 0;
//}