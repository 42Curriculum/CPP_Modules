/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:20:14 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 20:16:56 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist() : AWeapon("Power Fist", 8, 50) {}
	
	PowerFist(PowerFist const &copy) : AWeapon(copy) {}
	
	virtual ~PowerFist(){}

	PowerFist &operator=(PowerFist const &copy);

	void attack() const;
};

#endif