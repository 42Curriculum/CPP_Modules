/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:19:41 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 20:20:19 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:

	PlasmaRifle();
	
	PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy) {}
	
	~PlasmaRifle() {};

	PlasmaRifle &operator=(PlasmaRifle const &copy);

	void attack() const;
};

#endif