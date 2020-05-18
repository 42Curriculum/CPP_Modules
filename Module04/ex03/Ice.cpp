/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:36:59 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 02:51:56 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(Ice const &copy) : AMateria("ice"){_xp = copy._xp;}

Ice &Ice::operator=(Ice const &copy)
{
	_xp = copy._xp;
	return *this;
}

AMateria *Ice::clone(void) const
{
	Ice *cpy = new Ice(*this);
	return cpy;
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}