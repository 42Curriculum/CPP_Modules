/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 23:12:39 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:37:50 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name = "The Fragger");
	
	~NinjaTrap();
	
	void meleeAttack(std::string const &target);
	
	void rangedAttack(std::string const &target);

	void ninjaShoebox(ScavTrap &target);

	void ninjaShoebox(ClapTrap &target);

	void ninjaShoebox(NinjaTrap &target);

	void ninjaShoebox(FragTrap &target);
};

#endif