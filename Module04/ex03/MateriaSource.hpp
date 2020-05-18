/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 00:15:42 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 01:55:26 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *inv[4];
	
	int nb;
public:
	MateriaSource();
	
	MateriaSource(MateriaSource const &copy);
	
	virtual ~MateriaSource();

	MateriaSource &operator=(MateriaSource const &copy);

	void learnMateria(AMateria *m);
	
	AMateria* createMateria(std::string const &type);
};

#endif