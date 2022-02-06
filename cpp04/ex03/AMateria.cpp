#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) : _type(type)
{
	return;
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
