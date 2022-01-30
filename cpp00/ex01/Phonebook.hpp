/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:56:47 by bbaudry           #+#    #+#             */
/*   Updated: 2022/01/30 15:56:47 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
