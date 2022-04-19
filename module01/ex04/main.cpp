#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	filename = argv[1];
		std::string	str1 = argv[2];
		std::string	str2 = argv[3];
		std::ifstream	input(filename);
		if (!input)
		{
			std::cerr << filename << " could not be opened for reading!" << std::endl;
			return (1);
		}
		std::ofstream	output(filename + ".replace");
		if (!output)
		{
			std::cerr << filename + ".replace" << " could not be created for writing!" << std::endl;
			return (1);
		}
		while (input)
		{
			std::string	strInput;
			getline(input, strInput);
			int pos = strInput.find(str1);
			while (pos != -1)
			{
				strInput.erase(pos, str1.length());
				strInput.insert(pos, str2);
				pos = strInput.find(str1, pos + str2.length());
			}
			output << strInput << std::endl;
		}
		input.close();
		output.close();
	}
	else
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	return (0);
}
