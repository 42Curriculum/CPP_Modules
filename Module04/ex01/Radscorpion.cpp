/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Radscorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:20:38 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 02:06:51 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){std::cout << "* click click click *" << std::endl;}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy(copy){std::cout << "* click click click *" << std::endl;}

RadScorpion::~RadScorpion(){std::cout << "* SPROTCH *" << std::endl;}

RadScorpion &RadScorpion::operator=(RadScorpion const &copy)
{
	this->type = copy.type;
	this->hp = copy.hp;
	return *this;
}