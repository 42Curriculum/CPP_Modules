/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:37:50 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 03:00:12 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);


	me->use(-1, *bob);
	std::cout << "materia exp: " << tmp->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "materia exp: " << tmp->getXP() << std::endl;
	me->use(1, *bob);
	std::cout << "materia exp: " << tmp->getXP() << std::endl;
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	me->unequip(0);
	
	delete bob;
	delete me;
	delete src;

	return 0;
}