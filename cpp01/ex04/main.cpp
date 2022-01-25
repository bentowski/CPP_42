#include <fstream>
#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
	std::string line;
	std::string newLine;
	std::ifstream file(argv[1]);
	std::string fileout = argv[1];
	fileout += ".replace";
	std::ofstream out(fileout, std::ofstream::out);
	int x;
	int y;

	while (std::getline(file, line))
	{
		x = 0;
		while (line[x])
		{
			if (line[x] == argv[2][0])
			{
				y = 0;
				while (line[x + y] && line[x + y] == argv[2][y])
				{
					y++;
				}
				if (!argv[2][y])
				{
					out << argv[3];
					x = x + y - 1;
				}
				else
					out << line[x];
			}
			else
				out << line[x];
			x++;
		}
		out << std::endl;
	}
}
