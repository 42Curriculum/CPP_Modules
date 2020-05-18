/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 16:21:37 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 01:48:50 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const &name):
	name(name)
{std::cout << "Some random victim called " + this->name + " just appeared!"  << std::endl;}

Victim::Victim(Victim const &copy):name(copy.name)
{std::cout << "Some random victim called " + this->name + " just appeared!"  << std::endl;}

Victim::~Victim(){std::cout << "Victim " + name + " just died for no apparent reason !" << std::endl;}

Victim &Victim::operator=(Victim const &copy)
{
	this->name = copy.name;
	return *this;
}

std::string Victim::GetName(){return name;}

void Victim::getPolymorphed(void) const{std::cout << name + " has been turned into a cute little sheep !" << std::endl;}

std::ostream &operator<<(std::ostream &output, Victim &victim)
{
	output << "I'm " + victim.GetName() + " and I like otters !" << std::endl;
	return (output);
}