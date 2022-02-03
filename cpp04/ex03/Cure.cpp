#include "Cure.hpp"

Cure::Cure(): AMateria(), _type("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
	return;
}

Cure::~Cure()
{
	std::cout << Default Cure destructeur called" << std::endl;
	return;
}

AMateria* Cure::clone() const
{
	AMateria* newCure = newCure();
	return newCure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}
