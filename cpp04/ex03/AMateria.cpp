#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) : _type(type)
{
	return;
}

AMateria::AMateria(AMateria & src)
{
	_type = src.getType;
}

AMateria::~AMateria()
{
	return;
}

std::string	const & AMateria::getType( void ) const
{
	return (this->_type);
}

void		AMateria::setType( std::string const type )
{
	this->_type = type;
	return;
}

void		AMateria::use( ICharacter& target )
{
  std::cout << "* use Materia on " << target.getName() << " *" << std::endl;
	return ;
}

// AMateria & AMateria::operator= (const AMateria & src )
// {
//
// 	std::cout << "AMateria assignation operator called" << std::endl;
// 	if (this != &src)
// 	{
// 		for (int i = 0; i < 4; i++)
// 		{
// 			*this->_inventory[i] = new src._inventory[i];
// 		}
// 	}
// 	return *this;
// }
