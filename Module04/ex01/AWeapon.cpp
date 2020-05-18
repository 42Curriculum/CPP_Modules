/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:03:56 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 19:10:10 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon &AWeapon::operator=(AWeapon const &other)
{
	this->name = other.name;
	this->cost = other.cost;
	this->damage = other.damage;
	return *this;
}

std::string AWeapon::getName() const{return name;}

int AWeapon::getAPCost() const{return this->cost;}

int AWeapon::getDamage() const{return (this->damage);}