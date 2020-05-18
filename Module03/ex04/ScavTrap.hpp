/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:15:31 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:34:02 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name = "The DoorKeeper");
	
	~ScavTrap();
	
	void meleeAttack(std::string const &target);
	
	void rangedAttack(std::string const &target);

	void challengeNewcomer(std::string const &target);
};

#endif