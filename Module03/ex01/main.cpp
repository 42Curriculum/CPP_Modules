/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:50:52 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/10 18:18:11 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	FragTrap frag;
	ScavTrap scav;
	std::string input;
	
	while (42)
	{
		std::cout << "Choose : FRAG or SCAV?\n";
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
		else
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
	}
}