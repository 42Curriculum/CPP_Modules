/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 00:11:30 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 02:23:30 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
class AMateria; //Weird workaround that works. Need tp inclde file that uses class, but class is not yet defined
# include "ICharacter.hpp"
# include <iostream>
# include <string>

class AMateria
{
protected:
	std::string type;
	unsigned int _xp;
public:
	AMateria() {};
	
	AMateria(std::string const &type) : type(type), _xp(0) {};
	
	virtual ~AMateria() {}

	std::string const &getType() const;
	
	unsigned int getXP() const;

	virtual AMateria *clone() const = 0;
	
	virtual void use(ICharacter &target);
};

#endif
