#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain default constructor" << std::endl;
  return ;
}

Brain::Brain( Brain & src )
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain()
{
  std::cout << "Brain default destructor" << std::endl;
  return ;
}

Brain & Brain::operator= (const Brain & src )
{
	int x = 0;
	if (this != &src)
	{
		while (x < 100)
		{
			this->ideas[x] = src.ideas[x];
			x++;
		}
		std::cout << "Brain Assignation operator called" << std::endl;
	}
	return *this;
}
