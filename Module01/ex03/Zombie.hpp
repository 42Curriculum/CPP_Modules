/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 23:20:56 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 06:19:41 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <random>

class Zombie
{
private:
	std::string	type;
	std::string	name;
public:

	Zombie(){};
	Zombie(std::string type, std::string name);
	~Zombie();
	
	void set(std::string type, std::string name)
	{
		this->type = type;
		this->name = name;
	}
	void announce();
};

#endif