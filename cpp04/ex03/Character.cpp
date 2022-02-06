#include "Character.hpp"

Character::Character() : _name("undefined")
{
	return;
}

Character::Character( std::string name ) : _name(name)
{
	for (int i = 0; i < 4; i++) { this->_inventory[i] = 0; }
	return;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++) { delete this->_inventory[i]; }
	for (int i = 0; i < 4; i++) { this->_inventory[i] = 0; }
	return;
}

std::string	const & Character::getName( void ) const
{
	return (this->_name);
}

void Character::equip( AMateria* m )
{
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return ;
		}
	}
	return ;
}

void Character::unequip( int idx )
{
	if (_inventory[idx])
		_inventory[idx] = NULL;
	return ;
}

void		Character::use( int idx, ICharacter& target )
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	return ;
}
