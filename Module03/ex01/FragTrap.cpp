/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 13:08:09 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/10 17:11:50 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <random>

FragTrap::FragTrap(std::string name) : name(name)
{
	hp = max_hp;
	ep = max_ep;
	lvl = 1;
	std::cout << "FR4G-TP Initialized.<" + name + "> has been loaded\n";
}

FragTrap::~FragTrap(){std::cout << "FR4G-TP <" + name + "> has been deallocated\n";}

void FragTrap::meleeAttack(std::string const &target){std::cout << "FR4G-TP <" + name + "> melees " + target + " causing " + std::to_string((int)melee_dmg) + "damage.\n";}

void FragTrap::rangedAttack(std::string const &target){std::cout << "FR4G-TP <" + name + "> attacks " + target + " at range for " + std::to_string((int)ranged_dmg) + "damage.\n";}

void FragTrap::takeDamage(unsigned int amount)
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
		std::cout << "FR4G-TP <" + name + "> : *Bzzt..I've been hit!*\n";
	}
	if (hp <= 0)
		std::cout << "<" + name + "> has been defeated\n";
	else
		std::cout << "<" + name + "> " + std::to_string(hp) + "hp remaining\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	((hp + (int)amount) <= max_hp) ? (hp += amount) : (hp = max_hp);
		std::cout << "FR4G-TP <" + name + "> : *Undergoingrepairs*\n";
	if (hp == max_hp)
		std::cout << "<" + name + "> is fully healed\n";
	else
		std::cout << "<" + name + "> " + std::to_string(hp) + "hp remaining\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (ep < 25)
	{
		std::cout << "<" + name + "> Does not have enough nergy to proceed";
		return ;
	}
	std::string attacks[5]
	{
		"summons a BONE STORM!!",
		"used Lightning strike",
		"used Thunder. it is very effective"
		"casts ShasowBolt",
		"shouts FUS-ROH-DA!"
	};
	std::cout << "FR4G-TP <" + name + "> *" +attacks[rand() %5] + "* against " + target << std::endl;
}