/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:15:22 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/10 17:33:17 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <random>

ScavTrap::ScavTrap(std::string name) : name(name)
{
	hp = max_hp;
	ep = max_ep;
	lvl = 1;
	std::cout << "SC4V-TP Initialized.<" + name + "> has been loaded\n";
}

ScavTrap::~ScavTrap(){std::cout << "SC4V-TP <" + name + "> has been deallocated\n";}

void ScavTrap::meleeAttack(std::string const &target){std::cout << "SC4V-TP <" + name + "> ABSOLUTELY SMASHES " + target + " DEALING A WHOOPING " + std::to_string((int)melee_dmg) + "damage.\n";}

void ScavTrap::rangedAttack(std::string const &target){std::cout << "SC4V-TP <" + name + "> takes aim at " + target + " and hits for " + std::to_string((int)ranged_dmg) + "damage.\n";}

void ScavTrap::takeDamage(unsigned int amount)
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
		std::cout << "FR4G-TP <" + name + "> : *screeches in pain*\n";
	}
	if (hp <= 0)
		std::cout << "<" + name + "> has been defeated\n";
	else
		std::cout << "<" + name + "> " + std::to_string(hp) + "hp remaining\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	((hp + (int)amount) <= max_hp) ? (hp += amount) : (hp = max_hp);
		std::cout << "FR4G-TP <" + name + "> : *Y SPIRIT GROWS STRONG*\n";
	if (hp == max_hp)
		std::cout << "<" + name + "> is fully healed\n";
	else
		std::cout << "<" + name + "> " + std::to_string(hp) + "hp remaining\n";
}

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