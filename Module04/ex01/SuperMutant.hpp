/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:17:27 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 19:54:04 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant();
	
	SuperMutant(SuperMutant const &copy);
	
	virtual ~SuperMutant();

	SuperMutant &operator=(SuperMutant const &copy);

	void takeDamage(int damage);
};

#endif