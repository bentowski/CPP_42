#include "MutantStack.hpp"
# include <algorithm>
# include <stack>
# include <list>
# include <deque>
# include <iostream>

int test_with_a_stack()
{
	MutantStack<int> mstack;

	mstack.push(5);									// stack : 5
	mstack.push(17);								// stack : 5 17

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();									// stack : 5

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);									// stack : 5 3 5 737 0

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "it: " << *it << std::endl;

	++it;
	--it;

	std::advance (it, 2);

	std::cout << "distance: " << std::distance(it, ite) << std::endl;

	while (it != ite)
	{
		std::cout << "elem: " << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	return 0;
}

int test_with_a_list()
{
	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << "top: " << mlist.back() << std::endl;

	mlist.pop_back();

	std::cout << "size: " << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	//[...]
	mlist.push_back(0);

	std::list<int>::iterator it = mlist.begin();
	std::list<int>::iterator ite = mlist.end();

	std::cout << "it: " << *it << std::endl;

	++it;
	--it;

	std::advance (it, 2);

	std::cout << "distance: " << std::distance(it, ite) << std::endl;

	while (it != ite)
	{
		std::cout << "elem: " << *it << std::endl;
		++it;
	}

	std::list<int> s(mlist);
	return 0;
}

int main( void ) {

	std::cout << "----- STACK -----" << std::endl;
	test_with_a_stack();

	std::cout << std::endl;

	std::cout << "----- LIST -----" << std::endl;
	test_with_a_list();
}
