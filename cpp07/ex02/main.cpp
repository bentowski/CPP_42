#include "Array.hpp"
#include "Array.tpp"
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;


int testIntegersArray( void ) {

	Array<int> intArr;
	Array<int> intnArr(5);
	Array<int> intnArr2;

	for (unsigned int i = 0; i < intnArr.size(); i++)
		intnArr.setArray(i, i);
	intnArr2 = intnArr;
	intnArr.setArray(0, -1);

	cout << intArr << endl;
	cout << intnArr << endl;
	cout << intnArr2 << endl;

	try {
		cout << intnArr2[12] << endl;
	}
	catch (Array<int>::Out &e) {
		cout << "Error: index out of array limit" << endl;
	}

	return 0;
}

#define MAX_VAL 750
int main( int, char** )
{
	cout << "------ Test 0: Subject ------" << endl;

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

	cout << endl;

	cout << "------ Test 1: Integers ------" << endl;
	testIntegersArray();
	cout << endl;

    return 0;
}
