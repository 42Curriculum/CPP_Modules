/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 23:50:06 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 02:51:17 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
	
	ZombieEvent::~ZombieEvent(){}

	void 	ZombieEvent::setZombieType(std::string type) {this->type = type;}
	
	Zombie	*ZombieEvent::newZombie(std::string name)
	{
		Zombie *newguy = new Zombie(this->type, name);
		return newguy;
	}
	
	Zombie	*ZombieEvent::randomChump()
	{
		std::string names[10] {
		"Diann Duhn",
		"Mario Mckeown",
		"Tyson Turrell",
		"Jennefer Jenny",
		"Dylan Dulaney",
		"Cary Coates",
		"Janna Jandreau",
		"Lorenzo Leo",
		"Kristine Kurth",
		"Alane Alter"
		};
		int index = std::rand() % 10;
		Zombie *zomb = new Zombie(this->type, names[index]);
		std::cout << "A " << this->type << " has been spotted! It is marching towards you at a rather slow speed!!!" << std::endl;
		zomb->announce();
		return zomb;
	}