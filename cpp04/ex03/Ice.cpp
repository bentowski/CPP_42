#include "Ice.hpp"

Ice::Ice(): AMateria(), _type("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
	return;
}

Ice::~Ice()
{
	std::cout << Default Ice destructeur called" << std::endl;
	return;
}

AMateria* Ice::clone() const
{
	AMateria* newIce = newIce();
	return newIce;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots en ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
