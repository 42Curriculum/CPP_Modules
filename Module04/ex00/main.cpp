/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 17:45:16 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 01:35:18 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	
	robert.polymorph(jim);
	robert.polymorph(joe);

	Sorcerer josh("Josh", "the Luminiferous");
	Victim jam("Jammy");
	std::cout << "Something strange is hapenning.... All the victims are turning into peons!\n";
	
	Peon joey(joe);
	jim = joe;
	robert = josh;

	josh.polymorph(joey);
	josh.polymorph(jim);
	josh.polymorph(jam);
	return (0);
}