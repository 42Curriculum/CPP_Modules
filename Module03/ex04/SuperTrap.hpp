/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 00:02:26 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 00:46:44 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string name = "Overkill");

	~SuperTrap();

	void rangedAttack(std::string const &target);
	
	void meleeAttack(std::string const &target);
};

#endif