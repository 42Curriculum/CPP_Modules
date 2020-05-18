/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:11:14 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/08 02:12:54 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "iostream"
# include "contact.hpp"

class phonebook
{

private:
	contact cont[8];
	int len;
public:
	phonebook();
	
	~phonebook();

	int addcontact();
	
	int prompt();

	void search();
};

#endif