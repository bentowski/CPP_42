#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
	private:
		Cure(Cure & src);
   		Cure& operator=(Cure const & src);
};

#endif
