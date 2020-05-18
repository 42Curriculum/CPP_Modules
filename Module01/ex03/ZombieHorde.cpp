/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 05:20:44 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 06:26:26 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n, std::string type)
{
	this->n = n;
	this->type = type;
	std::string names[10] {
		"Diann Duhn",
		"Mario Mckeown",
		"Tyson Turrell",
		"Jennefer Jenny",
		"Dylan Dulaney",
		"Cary Coates",
		"Janna Jandreau",
		"Lorenzo Leo",
		"Kristine Kurth",
		"Alane Alter"
		};
	if (n > 0)
	{
		horde = new Zombie[n];
		for (int i = 0; i < n; i++)
			horde[i].set(type, names[std::rand() % 10]);
	}
	else
		std::cout << "You cannot make a horde of zero members!" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "A horde of " + type + " is melting." << std::endl;
	delete[] horde;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->n; i++)
	{
		horde[i].announce();
	}
}