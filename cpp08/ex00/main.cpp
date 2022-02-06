#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int test_vector ( void ) {

	std::vector<int>				vec(5, 5);
	std::vector<int>::iterator	it;
	int						to_find;

	try {
		to_find = 5;
		it = easyfind(vec, to_find);
		std::cout << "Element " << to_find << " found in vector" << std::endl;
	}
	catch ( ElemNotFound &e ) {
		std::cout << "Error: " << to_find << ": " << e.what() << std::endl;
	}

	try {
		to_find = 6;
		it = easyfind(vec, to_find);
		std::cout << "Element " << to_find << " found in vector" << std::endl;
	}
	catch ( ElemNotFound &e ) {
		std::cout << "Error: " << to_find << ": " << e.what() << std::endl;
	}

	return 0;
}

int test_deque ( void ) {

	std::deque<int>				deq;
	std::deque<int>::iterator	it;
	int						to_find;

	for (int i = 0; i < 5; i++)
		deq.push_back(i);

	try {
		to_find = 2;
		it = easyfind(deq, to_find);
		std::cout << "Element " << to_find << " found in deque" << std::endl;
	}
	catch ( ElemNotFound &e ) {
		std::cout << "Error: " << to_find << ": " << e.what() << std::endl;
	}

	try {
		to_find = 6;
		it = easyfind(deq, to_find);
		std::cout << "Element " << to_find << " found in deque" << std::endl;
	}
	catch ( ElemNotFound &e ) {
		std::cout << "Error: " << to_find << ": " << e.what() << std::endl;
	}

	return 0;
}

int main ( void ) {

	std::cout << "------ Test vector ------" << std::endl;
	test_vector();

	std::cout << std::endl;

	std::cout << "------ Test deque ------" << std::endl;
	test_deque();

	return 0;
}
