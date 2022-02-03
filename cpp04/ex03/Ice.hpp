#ifndef ICE_H
# define ICE_H
# include "Materia.hpp"

class Ice
{
	public:
		Ice();
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
	private:
		Ice(Ice & src);
	    int& operator=(Ice const & src);
		std::string const type = "ice";
}
#endif
