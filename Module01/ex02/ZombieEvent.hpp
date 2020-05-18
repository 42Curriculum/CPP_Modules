/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 23:56:03 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 02:48:49 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	type;
public:
	ZombieEvent(std::string type = "BrainMuncher") {this->type = type;};
	
	~ZombieEvent();

	void 	setZombieType(std::string type);
	
	Zombie	*newZombie(std::string name);
	
	Zombie	*randomChump();
};

#endif