#include <cctype>
#include <cstring>
#include <iostream>

class Contact {
	public :
		Contact();
		void addFirstName(std::string new_first_name);
		void printFirstName();
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};
