#include <cctype>
#include <cstring>
#include <iostream>
#include "./Contact.hpp"

Contact::Contact()
{

}

void Contact::addFirstName(std::string new_first_name)
{
		first_name = new_first_name;
}

void Contact::printFirstName()
{
	std::cout << first_name << std::endl;
}
