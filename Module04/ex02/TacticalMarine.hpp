/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:24:29 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/13 14:24:32 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &other);
	virtual ~TacticalMarine();

	TacticalMarine &operator=(TacticalMarine const &other);

	ISpaceMarine *clone(void) const;
	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;
};

#endif
