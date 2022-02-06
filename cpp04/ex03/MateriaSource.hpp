#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		void		learnMateria( AMateria* m );
		AMateria*	createMateria( std::string const & type );
	private:
		AMateria* _inventory[4];
		MateriaSource(MateriaSource const & src);
		MateriaSource&	operator=(const MateriaSource & src);
};

#endif
