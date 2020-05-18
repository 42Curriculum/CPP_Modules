/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 21:13:59 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 21:59:22 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
	Weapon::Weapon(std::string type){this->type = type;}

	void Weapon::setType(std::string type){this->type = type;}

	std::string Weapon::getType() const {return this->type;}