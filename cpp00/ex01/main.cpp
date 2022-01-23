#include <cctype>
#include <cstring>
#include <iostream>
#include "./Phonebook.hpp"

int main()
{
	int		x;

	Phonebook	phonebook;
	std::cout << "Welcome !" << std::endl;
	while (1)
	{
		if (phonebook.listen())
			break;
	}
	std::cout << "Bye !" << std::endl;
	return (0);
}
