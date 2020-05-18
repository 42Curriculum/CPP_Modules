/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 03:57:15 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 01:40:49 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name = "The Fragger");
	
	~FragTrap();
	
	void meleeAttack(std::string const &target);
	
	void rangedAttack(std::string const &target);

	void vaulthunter_dot_exe(std::string const &target);
};

#endif