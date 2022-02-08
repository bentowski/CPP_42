#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
	private:
		Ice(Ice & src);
    	Ice& operator=(Ice const & src);
};
#endif
