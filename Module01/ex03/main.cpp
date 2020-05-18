/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 06:01:20 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 23:14:47 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"

int main()
{
	std::cout << "~~A horde of brain munchers appear!" << std::endl;
	ZombieHorde horde;
	horde.announce();
	std::cout << "~~They are followed by a horde of Lurkers" << std::endl;
	ZombieHorde lhorde(10, "Lurkers");
	lhorde.announce();
	std::cout << "\n\n~~The sun is shining...\n\n";
}