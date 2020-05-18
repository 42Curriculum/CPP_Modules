/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:23:50 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/13 14:23:53 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {};
	virtual int getCount(void) const = 0;
	virtual ISpaceMarine *getUnit(int index) const = 0;
	virtual int push(ISpaceMarine *unit) = 0;
};

#endif
