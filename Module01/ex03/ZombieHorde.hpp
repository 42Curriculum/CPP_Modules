/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 05:22:37 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 06:14:14 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int n;
	std::string type;
	Zombie *horde;
public:
	ZombieHorde(int n = 5, std::string type = "Brain Muncher");
	
	~ZombieHorde();

	void announce();
};