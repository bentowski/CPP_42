#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	return;
}

MateriaSource::~MateriaSource( void )
{
	return;
}

void MateriaSource::learnMateria( AMateria* m )
{
    for (int i = 0; i < 4; i++) {
        if (!_inventory[i]) {
            _inventory[i] = m->clone();
            return ;
        }
    }
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++) {
        if (_inventory[i]->getType() == type)
            return _inventory[i]->clone();
    }
    return 0;
}
