#include <cctype>
#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
	int x;
	int y;
	int len;

	if (argc > 1)
	{
		x = 1;
		while (x < argc)
		{
			y = 0;
			len = strlen(argv[x]);
			while (len > y)
			{
				argv[x][y] = toupper(argv[x][y]);
				std::cout << argv[x][y];
				y = y + 1;
			}
			x = x + 1;
		}
		std::cout << std::endl;
		return (1);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
