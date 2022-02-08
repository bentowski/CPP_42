#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	return;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
        delete _inventory[i];
    }
	return;
}

void MateriaSource::learnMateria( AMateria* m )
{
    for (int i = 0; i < 4; i++) {
        if (!_inventory[i]) {
            _inventory[i] = m->clone();
			delete m;
            return ;
        }
    }
	delete m;
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
