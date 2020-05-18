/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:19:33 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:36:40 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string name;
	int hp;
	int const max_hp = 100;
	int ep;
	int max_ep = 100;
	int lvl;
	int melee_dmg = 30;
	int ranged_dmg = 20;
	int res = 5;
public:

	ClapTrap(){std::cout << "Booting up CL4P-TP... ";};

	ClapTrap(std::string name);

	~ClapTrap();

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);
};

#endif