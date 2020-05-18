/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Radscoprion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:20:33 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 19:54:51 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion();
	
	RadScorpion(RadScorpion const &copy);
	
	virtual ~RadScorpion();

	RadScorpion &operator=(RadScorpion const &copy);

};

#endif