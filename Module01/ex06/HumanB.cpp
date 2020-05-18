/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 21:40:57 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 23:12:18 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name){this->name = name;}

void HumanB::setWeapon(const Weapon &weapon){this->weapon = &weapon;}

void HumanB::attack()
{
	if (weapon)
		std::cout << name + "Uses : " + weapon->getType() << std::endl;
	else
		std::cout << name +  "attacks with his bare hands" << std::endl;
}