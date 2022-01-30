/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:56:33 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:56:34 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_H
# define CONTACT_H

class Contact {
	public :
		Contact();
		~Contact();
		void	addContact(int x);
		int		isExist();
		void	printList(int x);
		void	printList2(std::string to_print);
		void	printAll();
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		int		exist;
};
#endif
