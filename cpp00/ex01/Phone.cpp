#include <cctype>
#include <cstring>
#include <iostream>
#include "./Contact.hpp"

int adding(Contact contact)
{
	std::string first_name;

	std::cout << "first name : ";
	std::cin >> first_name;
	return (1);
}

int searching(Contact contact)
{
	std::string name;

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
		if (test == add)
			adding(premier);
		if (test == search)
			searching(premier);
	}
	return (0);
}
