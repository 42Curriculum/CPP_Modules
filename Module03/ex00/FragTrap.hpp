/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 03:57:15 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 11:07:54 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

class FragTrap
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
	FragTrap(std::string name = "The Fragger");
	
	~FragTrap();
	
	void meleeAttack(std::string const &target);
	
	void rangedAttack(std::string const &target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);
	
	void vaulthunter_dot_exe(std::string const &target);
};

#endif