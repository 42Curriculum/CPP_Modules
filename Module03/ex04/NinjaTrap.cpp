/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 23:12:42 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:35:54 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>
#include <random>

NinjaTrap::NinjaTrap(std::string name)
{
	this->name = name;
	lvl = 1;
	hp = 60;
	max_hp = 60;
	ep = 120;
	max_ep = 120;
	melee_dmg = 60;
	ranged_dmg = 5;
	res = 0;
	std::cout << "NINJ4-TP Initialized.<" + name + "> has been loaded\n";
}

NinjaTrap::~NinjaTrap(){std::cout << "NINJ4-TP <" + name + "> has been deallocated\n";}

void NinjaTrap::meleeAttack(std::string const &target){std::cout << "NINJ4-TP <" + name + "> melees " + target + " causing " + std::to_string((int)melee_dmg) + "damage.\n";}

void NinjaTrap::rangedAttack(std::string const &target){std::cout << "NINJ4-TP <" + name + "> attacks " + target + " at range for " + std::to_string((int)ranged_dmg) + "damage.\n";}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	if (ep < 25)
	{
		std::cout << "<" + name + "> 's chakra is depleted";
		return ;
	}
	std::cout << "NINJ4-TP <" + name + "> *Accepts <" + target.GetName() + ">'s challenge. Shurkiens are flying.*" << std::endl;
	target.takeDamage(5);
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	if (ep < 25)
	{
		std::cout << "<" + name + "> 's chakra is depleted";
		return ;
	}
	std::cout << "NINJ4-TP <" + name + "> *Rushes forward to meet <" + target.GetName() + "> with his katana.*" << std::endl;
	target.takeDamage(15);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	if (ep < 25)
	{
		std::cout << "<" + name + "> 's chakra is depleted";
		return ;
	}
	std::cout << "NINJ4-TP <" + name + "> *Activates the Sharingan.* <" + target.GetName() + "> is being consumed by Amaterasu." << std::endl;
	target.takeDamage(35);
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	if (ep < 25)
	{
		std::cout << "<" + name + "> 's chakra is depleted";
		return ;
	}
	std::cout << "NINJ4-TP <" + name + "> *Throws a rasengan at <" + target.GetName() + "> *" << std::endl;
	target.takeDamage(25);
}