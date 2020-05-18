/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:18:37 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 19:34:47 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy &Enemy::operator=(Enemy const &copy)
{
	this->type = copy.type;
	this->hp = copy.hp;
	return *this;
}

std::string Enemy::getType() const{return type;}

int Enemy::getHP() const{return hp;}

void Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return ;
	(hp - damage >= 0) ? (hp -= damage) : (hp = 0);
}