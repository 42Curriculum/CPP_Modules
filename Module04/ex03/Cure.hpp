/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:36:38 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 01:52:16 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure() : AMateria("cure") {}
	
	Cure(Cure const &copy);
	
	virtual ~Cure(){}

	Cure &operator=(Cure const &copy);

	AMateria *clone() const;
	
	void use(ICharacter &target);
};

#endif