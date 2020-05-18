/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 00:11:18 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 02:22:19 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
class ICharacter;
# include <string>
# include "AMateria.hpp"

class ICharacter
{
public:
	virtual ~ICharacter() {}
	
	virtual std::string const &getName() const = 0;
	
	virtual void equip(AMateria *m) = 0;
	
	virtual void unequip(int idx) = 0;
	
	virtual void use(int idx, ICharacter &target) = 0;
};

#endif