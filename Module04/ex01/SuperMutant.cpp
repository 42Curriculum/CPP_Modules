/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:21:05 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 19:22:51 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant():Enemy(170, "Super Mutant"){std::cout << "Gaaah. Me want smash heads !" << std::endl;}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy){std::cout << "Gaaah. Me want smash heads !" << std::endl;}

SuperMutant::~SuperMutant(){std::cout << "Aaargh ..." << std::endl;}

SuperMutant &SuperMutant::operator=(SuperMutant const &copy)
{
	this->type = copy.type;
	this->hp = copy.hp;
	return *this;
}

void SuperMutant::takeDamage(int damage){this->Enemy::takeDamage(damage - 3);}