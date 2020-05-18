/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:15:18 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 20:27:55 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character &Character::operator=(Character const &other)
{
	this->name = other.name;
	this->ap = other.ap;
	this->weapon = other.weapon;
	return (*this);
}

std::string Character::getName() const{return name;}

int Character::getAP() const{return ap;}

AWeapon *Character::getWeapon() const{return weapon;}

void Character::recoverAP(){(ap + 10  > 40) ? (ap = 40) : (ap += 10);}

void Character::equip(AWeapon *weapon){this->weapon = weapon;}

void Character::attack(Enemy *enemy)
{
	if (!weapon || !enemy || (ap < weapon->getAPCost()))
		return ;
	ap -= weapon->getAPCost();
	weapon->attack();
	std::cout << name + " attacks " + enemy->getType()+ " with a " + weapon->getName() << std::endl;
	enemy->takeDamage(weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::ostream &operator<<(std::ostream &output, Character const &character)
{
	output << character.getName() + " has " << std::to_string(character.getAP()) + " AP and ";
	if (character.getWeapon())
		output << "wields a " + character.getWeapon()->getName();
	else
		output << "is unarmed";
	output << std::endl;
	return (output);
}