#include <iostream>
#include "Array.hpp"
#include "Array.tpp"
#include <cstdlib>

class Human {

public:

	Human( void ) : _name("bob") {};
	Human( std::string name ) : _name(name) {};
	~Human( void ) {};

	std::string	getName( void ) const { return this->_name; };
	void		setName( std::string name ) { this->_name = name; };

private:

	std::string	_name;

};

int testIntegersArray( void ) {

	Array<int> intArr;
	Array<int> intnArr(5);
	Array<int> intnArr2;

	for (unsigned int i = 0; i < intnArr.size(); i++)
		intnArr.setArray(i, i);
	intnArr2 = intnArr;
  intnArr.setArray(0, -1);
	intnArr.setArray(4, 5);

	std::cout << intArr << std::endl;
	std::cout << intnArr << std::endl;
	std::cout << intnArr2 << std::endl;

	try {
		std::cout << intnArr2[12] << std::endl;
	}
	catch (Array<int>::Out &e) {
		std::cout << "Error: index out of array limit" << std::endl;
	}

	return 0;
}

int testHumansArray( void ) {

	Array<Human>	Band;
	Array<Human>	Beatles(4);

	Beatles.setArray(0, Human("stuart"));
	Beatles.setArray(1, Human("john"));
	Beatles.setArray(2, Human("ringo"));
	Beatles.setArray(3, Human("george"));
	Band = Beatles;
	Beatles.setArray(0, Human("paul"));

	for (unsigned int i = 0; i < Band.size(); i++)
		std::cout << Band[i].getName() << std::endl;
	std::cout << std::endl;

	for (unsigned int i = 0; i < Band.size(); i++)
		std::cout << Beatles[i].getName() << std::endl;
	std::cout << std::endl;

	try {
		std::cout << Beatles[5].getName() << std::endl;
	}
	catch (Array<Human>::Out &e) {
		std::cout << "Error: index out of array limit" << std::endl;
	}

	return 0;
}

#define MAX_VAL 750
int main( int, char** )
{
	std::cout << "------ Test 0: Subject ------" << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

	std::cout << std::endl;

	std::cout << "------ Test 1: Integers ------" << std::endl;
	testIntegersArray();
	std::cout << std::endl;

	std::cout << "------ Test 2: Humans ------" << std::endl;
	testHumansArray();
	std::cout << std::endl;

    return 0;
}
