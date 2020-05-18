/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 20:39:42 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 23:16:02 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>


void toHouse(Zombie *heapzombies[3])
{
	std::cout << "## Oh no, the HeapZombies are persistant, they have followed you here !!\n## No sign of the Stack Zombie..." << std::endl;
	for (int i = 0; i < 3; i++)
	{
		heapzombies[i]->announce();
	}
	ZombieEvent ev;
	heapzombies[2] = ev.newZombie("The Zomb");
}

int main()
{
	ZombieEvent event;
	Zombie *heapzombies[3];
	
	std::cout << "## There is nothing here... unless.." << std::endl;
	Zombie LonelyStackZombie("LonelyStackZombie", "Johnny \"Braiiiins\" Douglas");
	LonelyStackZombie.announce();
	std::cout << "## A horde of HeapZombies appear!" << std::endl;
	event.setZombieType("HeapZombie");
	for (int i = 0; i < 3; i++)
	{
		heapzombies[i] = event.randomChump();
	}
	std::cout << "## You go outside" << std::endl;
	toHouse(heapzombies);
	std::cout << "## You are back inside. StackZombie is still lurking... and he brought a friend from the heap!!" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		heapzombies[i]->announce();
		delete  heapzombies[i];
	}
	std::cout << "## Suddenly, the heap zombies collapse. StackZombie is still standing" << std::endl;
}