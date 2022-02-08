#ifndef MATERIA_H
# define MATERIA_H
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		void	setType( std::string const type );
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		AMateria(AMateria const & src);
	protected:
		std::string _type;
		AMateria();
		AMateria& operator=(const AMateria &AMateria);
};
#endif
