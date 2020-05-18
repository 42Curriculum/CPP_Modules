/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:50:52 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/10 17:02:10 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main()
{
	FragTrap frag;
	std::string input;
	
	while (42)
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
}