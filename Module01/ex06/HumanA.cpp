/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 21:41:15 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 23:12:29 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, const Weapon &weapon) : name(name), weapon(weapon){}

void HumanA::attack()
{
	std::cout << name + " uses : " + weapon.getType() << std::endl;
}