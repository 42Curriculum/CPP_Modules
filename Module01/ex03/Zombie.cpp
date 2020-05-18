/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 01:28:55 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 06:26:59 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "Zombie.hpp"
	#include <iostream>

	
	Zombie::Zombie(std::string type, std::string name)
	{
		this->type = type;
		this->name = name;
	}
	
	Zombie::~Zombie(){}
	
	void Zombie::announce()
	{
		std::cout << "< " << name << " (" + type + ") > *Inintelligible groans*" << std::endl;
	}