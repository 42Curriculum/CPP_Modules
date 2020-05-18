/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:19:33 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:34:19 by jjosephi         ###   ########.fr       */
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
	int max_hp;
	int ep;
	int max_ep;
	int lvl;
	int melee_dmg;
	int ranged_dmg;
	int res;
public:

	ClapTrap(){std::cout << "Booting up CL4P-TP... ";};

	ClapTrap(std::string name);

	~ClapTrap();

	std::string GetName(){return name;}

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);
};

#endif