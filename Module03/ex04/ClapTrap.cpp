/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:39:53 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:35:07 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <random>

ClapTrap::ClapTrap(std::string name) : name(name)
{
	lvl = 1;
	hp = 0;
	max_hp = 0;
	ep = 0;
	max_ep = 0;
	melee_dmg = 0;
	ranged_dmg = 0;
	res = 0;
	std::cout << "CL4P-TP Initialized.<" + name + "> has been loaded\n";
}

ClapTrap::~ClapTrap(){std::cout << "CL4P-TP <" + name + "> has been deallocated\n";}


void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount <= res)
	{
		std::cout << "<" + name + "> 's armor negates the damage...\n";
		return ;
	}
	if (hp == 0)
		std::cout << "<" + name + "> is already dead...\n";
	else
	{
		((hp + res - (int)amount) >= 0) ? (hp -= (amount - res)) : (hp = 0);
		std::cout << "<" + name + "> : *Bzzt..I've been hit!*\n";
	}
	if (hp <= 0)
		std::cout << "<" + name + "> has been defeated\n";
	else
		std::cout << "<" + name + "> " + std::to_string(hp) + "hp remaining\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	((hp + (int)amount) <= max_hp) ? (hp += amount) : (hp = max_hp);
		std::cout << "<" + name + "> : *Undergoingrepairs*\n";
	if (hp == max_hp)
		std::cout << "<" + name + "> is fully healed\n";
	else
		std::cout << "<" + name + "> " + std::to_string(hp) + "hp remaining\n";
}