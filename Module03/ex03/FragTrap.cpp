/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 13:08:09 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:37:32 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <random>

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	lvl = 1;
	hp = 100;
	max_hp = 100;
	ep = 100;
	max_ep = 100;
	melee_dmg = 30;
	ranged_dmg = 20;
	res = 5;
	std::cout << "FR4G-TP Initialized.<" + name + "> has been loaded\n";
}

FragTrap::~FragTrap(){std::cout << "FR4G-TP <" + name + "> has been deallocated\n";}

void FragTrap::meleeAttack(std::string const &target){std::cout << "FR4G-TP <" + name + "> melees " + target + " causing " + std::to_string((int)melee_dmg) + "damage.\n";}

void FragTrap::rangedAttack(std::string const &target){std::cout << "FR4G-TP <" + name + "> attacks " + target + " at range for " + std::to_string((int)ranged_dmg) + "damage.\n";}

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