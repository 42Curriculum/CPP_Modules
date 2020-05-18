/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 23:20:56 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 01:56:02 by jjosephi         ###   ########.fr       */
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

	Zombie(std::string type, std::string name);
	~Zombie();
	
	void announce();
};

#endif