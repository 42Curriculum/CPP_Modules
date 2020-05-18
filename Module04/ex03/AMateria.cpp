/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:35:25 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 02:20:13 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const &AMateria::getType() const{return type;}

unsigned int AMateria::getXP(void) const{return _xp;}

void AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}