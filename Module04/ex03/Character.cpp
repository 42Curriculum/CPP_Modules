/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:36:00 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 02:04:56 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const &Character::getName(void) const{return (name);}

Character::Character(std::string const &name) : name(name), equipped(0)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(Character const &copy) : name(copy.name), equipped(0)
{
	for (int i = 0; i < copy.equipped; i++)
		equip(copy.inventory[i]->clone());
	for (int i = equipped; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < equipped; i++)
		delete inventory[i];
}

Character &Character::operator=(Character const &copy)
{
	name = copy.name;
	for (int i = 0; i < equipped; i++)
		delete inventory[i];
	equipped = 0;
	for (int i = 0; i < copy.equipped; i++)
		equip(copy.inventory[i]->clone());
	for (int i = equipped; i < 4; i++)
		inventory[i] = NULL;
	return *this;
}

void Character::equip(AMateria *m)
{
	if (equipped == 4 || m == NULL)
		return ;
	for (int i = 0; i < equipped; i++)
		if (inventory[i] == m)
			return ;
	inventory[equipped++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= equipped || inventory[idx] == NULL)
		return ;
	for (int i = idx; i < 3; i++)
	{
		inventory[i] = inventory[i + 1];
		inventory[i + 1] = NULL;
	}
	equipped--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= equipped || inventory[idx] == NULL)
		return ;
	inventory[idx]->use(target);
}