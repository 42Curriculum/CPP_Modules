/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:19:25 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 20:19:50 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}


PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &copy)
{
	this->AWeapon::name = copy.name;
	this->cost = copy.cost;
	this->damage = copy.damage;
	return *this;
}

void PlasmaRifle::attack(void) const{std::cout << "* piouuu piouuu piouu *" << std::endl;}