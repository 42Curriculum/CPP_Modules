/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:40:55 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 01:59:19 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : nb(0)
{
	for (int i = 0; i < 4; i++)
		inv[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < nb; i++)
		inv[i] = NULL;
	for (int i = 0; i < copy.nb; i++)
		learnMateria(copy.inv[i]->clone());
	nb = copy.nb;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < nb; i++)
		delete inv[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &copy)
{
	for (int i = 0; i < nb; i++)
		delete this->inv[i];
	nb = 0;
	for (int i = 0; i < copy.nb; i++)
		learnMateria(copy.inv[i]->clone());
	for (int i = 0; i < 4; i++)
		inv[i] = NULL;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (nb  == 4 || m == NULL)
		return ;
	for (int i = 0; i < nb; i++)
		if (inv[i] == m)
			return ;
	inv[nb++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < nb; i++)
		if (inv[i]->getType() == type)
			return (inv[i]->clone());
	return (NULL);
}