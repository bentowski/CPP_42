#include <iostream>
#include <stdint.h>

struct Data { int a; double b ; std::string str; };

uintptr_t serialize(Data* ptr)
{
	std::cout << ">>> serialization <<<" << std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	std::cout << "<<< deserialization >>>" << std::endl;
	return reinterpret_cast<Data*>(raw);
}

int main( void )
{
	Data		s1;
	Data *		s2;
	uintptr_t	raw;

	s1.a = 42;
	s1.b = 3.14;
	s1.str = "Quarante-Deux";
  std::cout << "Struct s1 :" << std::endl;
	std::cout << "  - a: " << s1.a << std::endl;
	std::cout << "  - b: " << s1.b << std::endl;
	std::cout << "  - str: " << s1.str << std::endl;
	raw = serialize(&s1);
	s2 = deserialize(raw);
  std::cout << "Struct s2 :" << std::endl;
	std::cout << "  - a: " << s2->a << std::endl;
	std::cout << "  - b: " << s2->b << std::endl;
	std::cout << "  - str: " << s2->str << std::endl;
	return 0;
}
