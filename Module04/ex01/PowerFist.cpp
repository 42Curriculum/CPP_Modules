/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:19:57 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 20:17:33 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PowerFist.hpp"

PowerFist &PowerFist::operator=(PowerFist const &copy)
{
	this->name = copy.name;
	this->cost = copy.cost;
	this->damage = copy.damage;
	return (*this);
}

void PowerFist::attack() const {std::cout << "* pschhh... SBAM! *" << std::endl;}