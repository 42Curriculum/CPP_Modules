/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:38:40 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 20:10:31 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
protected:

	std::string name;

	int cost;
	
	int damage;
public:
	AWeapon() : name(std::string()), cost(0), damage(0){}
	
	AWeapon(std::string const &name, int cost, int damage) : name(name), cost(cost), damage(damage){}
	
	AWeapon(AWeapon const &copy) : name(copy.name), cost(copy.cost), damage(copy.damage) {}
	
	virtual ~AWeapon(){}

	AWeapon &operator=(AWeapon const &copy);

	std::string getName() const;
	
	int getAPCost() const;
	
	int getDamage() const;

	virtual void attack() const = 0;
};

#endif