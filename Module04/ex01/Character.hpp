/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:15:29 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 02:07:20 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string name;
	
	int ap;
	
	AWeapon *weapon;
public:
	
	Character(std::string const &name = "Charlie") : name(name), ap(40), weapon(NULL) {}
	
	Character(Character const &copy) : name(copy.name), ap(copy.ap), weapon(copy.weapon) {}
	
	virtual ~Character() {}

	Character &operator=(Character const &copy);

	std::string getName() const;
	
	int getAP() const;
	
	AWeapon *getWeapon() const;

	void recoverAP();
	
	void equip(AWeapon *weapon);
	
	void attack(Enemy *enemy);
};

std::ostream &operator<<(std::ostream &output, Character const &character);

#endif