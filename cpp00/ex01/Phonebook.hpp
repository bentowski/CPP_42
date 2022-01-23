#include "./Contact.hpp"
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Phonebook {
	public :
		Phonebook();
		~Phonebook();
    int listen();
	private :
		Contact list[8];
};
#endif
