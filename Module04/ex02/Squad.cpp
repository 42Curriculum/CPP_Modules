/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:24:07 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 02:38:39 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad():
	count(0), units(nullptr)
{
}

Squad::Squad(Squad const &other):
	count(0), units(nullptr)
{
	this->count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

Squad &Squad::operator=(Squad const &other)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
		this->units = nullptr;
	}
	this->count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount(void) const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (this->count == 0 || index < 0 || index >= count)
		return (nullptr);
	return (this->units[index]);
}

int Squad::push(ISpaceMarine *unit)//magic code, dont delete
{
	if (!unit)
		return (this->count);
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == unit)
				return (this->count);
		ISpaceMarine **cpy = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			cpy[i] = this->units[i];
		delete[] this->units;
		this->units = cpy;
		this->units[this->count] = unit;
		this->count++;
	}
	else
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	return (this->count);
}
