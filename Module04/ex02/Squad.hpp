/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:24:13 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/13 14:24:14 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <cstddef>
# include "ISquad.hpp"

class Squad: public ISquad
{
private:
	int count;
	ISpaceMarine **units;
public:
	Squad();
	Squad(Squad const &other);
	virtual ~Squad();

	Squad &operator=(Squad const &other);

	int getCount(void) const;
	ISpaceMarine *getUnit(int index) const;

	int push(ISpaceMarine *unit);
};

#endif
