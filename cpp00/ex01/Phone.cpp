#include <cctype>
#include <cstring>
#include <iostream>
#include "./Contact.hpp"

int adding(Contact contact)
{
	char *first_name;

	std::cout << "first name : ";
	std::cin >> first_name;
	return (1);
}

int searching(Contact contact)
{
	contact.printFirstName();
	return (1);
}

int main()
{
	std::string test;
	std::string out = "EXIT";
	std::string add = "ADD";
	std::string search = "SEARCH";

	Contact premier;
	while (test != out)
	{
		std::cin >> test;
		std::cout << "test" << std::endl;
		if (test == add)
			adding(premier);
		if (test == search)
		{
			searching(premier);
		}
	}
	return (0);
}
