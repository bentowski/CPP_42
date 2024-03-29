#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
	return;
}

Ice::~Ice()
{
	std::cout << "Default Ice destructeur called" << std::endl;
	return;
}

AMateria* Ice::clone() const
{
	AMateria* newIce = new Ice();
	return newIce;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots en ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
