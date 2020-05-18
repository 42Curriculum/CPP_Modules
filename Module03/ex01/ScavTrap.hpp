/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:15:31 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/10 17:28:43 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
private:
	std::string name;
	int hp;
	int const max_hp = 100;
	int ep;
	int const max_ep = 100;
	int lvl;
	int const melee_dmg = 30;
	int const ranged_dmg = 20;
	int const res = 5;
public:
	ScavTrap(std::string name = "The DoorKeeper");
	
	~ScavTrap();
	
	void meleeAttack(std::string const &target);
	
	void rangedAttack(std::string const &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

	void challengeNewcomer(std::string const &target);
};

#endif