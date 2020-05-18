/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 05:22:42 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 16:19:29 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const &name):Victim(name){std::cout << "Zog zog." << std::endl;}

Peon::Peon(Peon const &copy) : Victim(copy.name){std::cout << "Zog zog." << std::endl;}

Peon::~Peon(){std::cout << "Bleuark..." << std::endl;}

Peon &Peon::operator=(Peon const &copy)
{
	this->name = copy.name;
	return *this;
}

void Peon::getPolymorphed() const{std::cout << name + " has been turned into a pink pony !" << std::endl;}