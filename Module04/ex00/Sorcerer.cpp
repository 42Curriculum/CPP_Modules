/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 17:30:12 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 01:44:24 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << name + ", " + title + ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy): name(copy.name), title(copy.title)
{
	std::cout << name + ", " + title + ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(){std::cout << name + ", " + title + ", is dead. Consequences will never be the same !" << std::endl;}

Sorcerer &Sorcerer::operator=(Sorcerer const &copy)
{
	this->name = copy.name;
	this->title = copy.title;
	return *this;
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::string Sorcerer::getName() {return (name);}

std::string Sorcerer::getTitle(){return (this->title);}

std::ostream &operator<<(std::ostream &output, Sorcerer &sorcerer)
{
	output << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle() << ", and I like ponies !" << std::endl;
	return output;
}