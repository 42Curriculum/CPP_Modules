/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:38:14 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 02:54:10 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(Cure const &copy) : AMateria("cure"){_xp = copy._xp;}

Cure &Cure::operator=(Cure const &copy)
{
	_xp = copy._xp;
	return *this;
}

AMateria *Cure::clone() const
{
	Cure *copy = new Cure(*this);
	return copy;
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout <<  "* heals " + target.getName() + " 's wounds *" << std::endl;
}