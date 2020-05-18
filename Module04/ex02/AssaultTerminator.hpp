/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:23:27 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/13 14:23:32 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &other);
	virtual ~AssaultTerminator();

	AssaultTerminator &operator=(AssaultTerminator const &other);

	ISpaceMarine *clone(void) const;
	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;
};

#endif
