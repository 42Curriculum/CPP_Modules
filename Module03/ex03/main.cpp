/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:50:52 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:32:09 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

#include <iostream>

int main()
{
	ClapTrap clap;
	FragTrap frag;
	ScavTrap scav;
	NinjaTrap ninja;
	NinjaTrap eninja("Evil Ninja");
	
	std::string input;
	
	while (42)
	{
		std::cout << "Choose : FRAG SCAV  NINJA?\n";
		std::getline(std::cin, input);
		if (input == "FRAG")
		{
			std::cout << "Commands available: MELEE RANGED VH.EXE REPAIR HIT\n";
			std::getline(std::cin, input);
			if (input == "MELEE")
			{
				std::cout << "Please input a target name\n";
				std::getline(std::cin, input);
				frag.meleeAttack(input);
			}
			else if (input == "RANGED")
			{
				std::cout << "Please input a target name\n";
				std::getline(std::cin, input);
				frag.rangedAttack(input);
			}
			else if (input == "VH.EXE")
			{
				std::cout << "Please input a target name\n";
				std::getline(std::cin, input);
				frag.vaulthunter_dot_exe(input);
			}
			else if (input == "REPAIR")
			{
				std::cout << "Please input a repair amount\n";
				std::getline(std::cin, input);
				frag.beRepaired(std::stoi(input));
			}
			else if (input == "HIT")
			{
				std::cout << "Please input a damage amount\n";
				std::getline(std::cin, input);
				frag.takeDamage(std::stoi(input));
			}
		}
		else if (input == "SCAV")
		{
			std::cout << "Commands available: MELEE RANGED CHALLENGE REPAIR HIT\n";
			std::getline(std::cin, input);
			if (input == "MELEE")
			{
				std::cout << "Please input a target name\n";
				std::getline(std::cin, input);
				scav.meleeAttack(input);
			}
			else if (input == "RANGED")
			{
				std::cout << "Please input a target name\n";
				std::getline(std::cin, input);
				scav.rangedAttack(input);
			}
			else if (input == "CHALLENGE")
			{
				std::cout << "Please input a target name\n";
				std::getline(std::cin, input);
				scav.challengeNewcomer(input);
			}
			else if (input == "REPAIR")
			{
				std::cout << "Please input a repair amount\n";
				std::getline(std::cin, input);
				scav.beRepaired(std::stoi(input));
			}
			else if (input == "HIT")
			{
				std::cout << "Please input a damage amount\n";
				std::getline(std::cin, input);
				scav.takeDamage(std::stoi(input));
			}
		}
		else if (input == "NINJA")
		{
			std::cout << "Commands available: MELEE RANGED SHOEBOX REPAIR HIT\n";
			std::getline(std::cin, input);
			if (input == "MELEE")
			{
				std::cout << "Please input a target name\n";
				std::getline(std::cin, input);
				ninja.meleeAttack(input);
			}
			else if (input == "RANGED")
			{
				std::cout << "Please input a target name\n";
				std::getline(std::cin, input);
				ninja.rangedAttack(input);
			}
			else if (input == "SHOEBOX")
			{
				std::cout << "Which target?\n";
				std::cout << "SCAV, NINJA, CLAP, FRAG\n";
				std::getline(std::cin, input);
				if (input == "SCAV")
					ninja.ninjaShoebox(scav);
				else if (input == "CLAP")
					ninja.ninjaShoebox(clap);
				else if (input == "NINJA")
					ninja.ninjaShoebox(eninja);
				else if (input == "FRAG")
					ninja.ninjaShoebox(frag);
			}
			else if (input == "REPAIR")
			{
				std::cout << "Please input a repair amount\n";
				std::getline(std::cin, input);
				ninja.beRepaired(std::stoi(input));
			}
			else if (input == "HIT")
			{
				std::cout << "Please input a damage amount\n";
				std::getline(std::cin, input);
				ninja.takeDamage(std::stoi(input));
			}
		}
	}
}