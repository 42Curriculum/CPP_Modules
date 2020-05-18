/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:24:22 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/13 14:24:25 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
	(void)other;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout <<  "Aaargh ..." << std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &other)
{
	(void)other;
	return (*this);
}

ISpaceMarine *TacticalMarine::clone(void) const
{
	TacticalMarine *cpy = new TacticalMarine(*this);
	return (cpy);
}

void TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
