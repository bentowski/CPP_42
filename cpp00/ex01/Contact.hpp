
#ifndef CONTACT_H
# define CONTACT_H

class Contact {
	public :
		Contact();
		void modifyFirstName(char *new_first_name);
		void getFisrtName();
		void printFirstName();
	private :
		char *first_name;
		char *last_name;
		char *nickname;
		char *phone_number;
		char *darkest_secret;
};
#endif
