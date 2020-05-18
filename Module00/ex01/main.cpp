/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:09:30 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/08 00:35:59 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "iostream"
#include "cstdlib"
int
	main(void)
{
	phonebook pb;
	std::string input;

	while (42)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			pb.addcontact();
		else if (input == "SEARCH")
			pb.search();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Invalid command"<< std::endl;
	}
	return (0);
}