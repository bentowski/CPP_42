#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
  if (argc != 2 || !argv[1][0])
  {
    return (1);
  }
  Convert convert(argv[1]);
  std::cout << convert;
  return (0);
}
