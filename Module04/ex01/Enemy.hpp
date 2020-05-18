/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:18:59 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 20:12:35 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
protected:

	std::string type;
	
	int hp;
public:
	Enemy(){}
	
	Enemy(int hp, std::string const &type) : type(type), hp(hp) {}
	
	Enemy(Enemy const &copy) : type(copy.type), hp(copy.hp){ }
	
	virtual ~Enemy(){};

	Enemy &operator=(Enemy const &copy);

	std::string getType() const;

	int getHP() const;

	void takeDamage(int damage);
};

#endif