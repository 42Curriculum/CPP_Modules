/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 00:06:03 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:42:37 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
: ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->name = name;
	lvl = 1;
	hp = this->FragTrap::hp;
	max_hp = this->FragTrap::max_hp;
	ep = this->NinjaTrap::ep;
	max_ep = this->NinjaTrap::max_ep;
	melee_dmg = this->NinjaTrap::melee_dmg;
	ranged_dmg = this->FragTrap::ranged_dmg;
	res = this->FragTrap::res;
	std::cout << "5UP3R-TP Initialized.<" + name + "> has been loaded\n";
}

SuperTrap::~SuperTrap(){std::cout << "5UP3R-TP <" + name + "> has been deallocated\n";}

void SuperTrap::rangedAttack(std::string const &target){FragTrap::rangedAttack(target);}

void SuperTrap::meleeAttack(std::string const &target){NinjaTrap::meleeAttack(target);}