#ifndef CURE_H
# define CURE_H
# include "Materia.hpp"

class Cure
{
	public:
		Cure();
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
	private:
		Cure(Cure & src);
	    int& operator=(Cure const & src);
};

#endif
