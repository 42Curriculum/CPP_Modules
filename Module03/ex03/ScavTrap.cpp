/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:15:22 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:38:05 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <random>

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	lvl = 1;
	hp = 100;
	max_hp = 100;
	ep = 50;
	max_ep = 50;
	melee_dmg = 20;
	ranged_dmg = 15;
	res = 3;
	std::cout << "SC4V-TP Initialized.<" + name + "> has been loaded\n";
}

ScavTrap::~ScavTrap(){std::cout << "SC4V-TP <" + name + "> has been deallocated\n";}

void ScavTrap::meleeAttack(std::string const &target){std::cout << "SC4V-TP <" + name + "> ABSOLUTELY SMASHES " + target + " DEALING A WHOOPING " + std::to_string((int)melee_dmg) + "damage.\n";}

void ScavTrap::rangedAttack(std::string const &target){std::cout << "SC4V-TP <" + name + "> takes aim at " + target + " and hits for " + std::to_string((int)ranged_dmg) + "damage.\n";}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	if (ep < 25)
	{
		std::cout << "<" + name + "> Does not have enough nergy to proceed";
		return ;
	}
	std::string attacks[5]
	{
		"send challenge a to an epic combat of Rock, Paper, Scissors",
		"asks Do you even lift, bro?",
		"politely send a challenges to A FIGHT TO THE DEATH"
		"asks Heads or tail?",
		"shouts : HERE COMES A NEW CHALLENGER! GET READY... FIGHT!"
	};
	std::cout << "FR4G-TP <" + name + "> *" +attacks[rand() %5] + "* to " + target << std::endl;
}