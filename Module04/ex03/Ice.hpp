/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:37:19 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 02:07:50 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria
{
public:

	Ice() : AMateria("ice") {}
	
	Ice(Ice const &copy);
	
	virtual ~Ice() {}

	Ice &operator=(Ice const &copy);

	AMateria *clone(void) const;
	
	void use(ICharacter &target);
};

#endif