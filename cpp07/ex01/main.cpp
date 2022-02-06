#include "iter.hpp"

int main( void ) {

	int 	intR[5] = { 0, 1, 2, 3, 4 };
	double	dblR[5] = { 0.5, 1.5, 2.5, 3.5, 4.5 };
	float	fltR[5] = { 0.5f, 1.5f, 2.5f, 3.5f, 4.5f };
	bool	bolR[5] = { true, false, false, true, true };
	std::string	strR[5] = { "str1", "str2", "str3", "str4", "str5" };

	::iter( intR, 5, &display );
  std::cout << std::endl;
	::iter( dblR, 5, &display );
  std::cout << std::endl;
	::iter( fltR, 5, &display );
  std::cout << std::endl;
	::iter( bolR, 5, &display );
  std::cout << std::endl;
	::iter( strR, 5, &display );
  std::cout << std::endl;

	return 0;
}
