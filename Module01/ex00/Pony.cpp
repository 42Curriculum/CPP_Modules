/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:55:55 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/08 18:15:26 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string pname) : name(pname)
{
	candymountain = 42;
	energy = 10;
	std::cout << "Let's go tp CandyMountain!" << std::endl; 
}

Pony::~Pony(){ std::cout << name + "is leaving. Goodbye" << std::endl;}

int Pony::run()
{
	if (energy >= 3)
	{
		energy -= 3;
		(candymountain > 0) ? candymountain -= 18 : candymountain += 18;
		if (candymountain == 0)
		{
			std::cout << name + " has reached Candy Mountain! Good job!" << std::endl;
			return 0;
		}
		else 
		{
			if (candymountain > 0)
				std::cout << name + " is " + std::to_string(candymountain) + " km away from  Candy Mountain" << std::endl;
			else
				std::cout << name + " is " + std::to_string(candymountain  * -1) + " km past  Candy Mountain" << std::endl;
		}
	}
	else
		std::cout << name + " is too tired to run!" << std::endl;
	if (energy <= 0)
	{
		if (candymountain != 0)
		{
			std::cout << name + " has not reached Candy Mountain in time :(" << std::endl;
			return (0);
		}
		
	}
	return 1;
}

int Pony::walk()
{
	if (energy >= 1)
	{
		energy -= 1;
		(candymountain > 0) ? candymountain -= 3 : candymountain += 3;
		if (candymountain == 0)
		{
			std::cout << name + " has reached Candy Mountain! Good job!" << std::endl;
			exit(0);
		}
		else 
		{
			if (candymountain > 0)
				std::cout << name + " is " + std::to_string(candymountain) + " km away from  Candy Mountain" << std::endl;
			else
				std::cout << name + " is " + std::to_string(candymountain  * -1) + " km past  Candy Mountain" << std::endl;
		}
	}
	else
		std::cout << name + " is too tired to run!" << std::endl;
	if (energy <= 0)
	{
		if (candymountain != 0)
		{
			std::cout << name + " has not reached Candy Mountain in time :(" << std::endl;
			return 0;
		}
		
	}
	return 1;
}

int Pony::trot()
{
	if (energy >= 2)
	{
		energy -= 2;
		(candymountain > 0) ? candymountain -= 9 : candymountain += 9;
		if (candymountain == 0)
		{
			std::cout << name + " has reached Candy Mountain! Good job!" << std::endl;
			return 0;
		}
		else 
		{
			if (candymountain > 0)
				std::cout << name + " is " + std::to_string(candymountain) + " km away from  Candy Mountain" << std::endl;
			else
				std::cout << name + " is " + std::to_string(candymountain  * -1) + " km past  Candy Mountain" << std::endl;
		}
	}
	else
		std::cout << name + " is too tired to run!" << std::endl;
	if (energy <= 0)
	{
		if (candymountain != 0)
		{
			std::cout << name + " has not reached Candy Mountain in time :(" << std::endl;
			return 0;
		}
		
	}
	return 1;
}

void Pony::status()
{
	std::cout << "Name : " +name + "\nEnergy : " + std::to_string(energy) + "\nDistance to CandyMountain : " + std::to_string(candymountain) + " Km"<< std::endl;
}