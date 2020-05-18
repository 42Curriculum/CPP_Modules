/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 05:23:42 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 01:57:55 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;
	Sorcerer();
public:

	Sorcerer(std::string name, std::string itle);

	Sorcerer(const Sorcerer& copy);
	
	~Sorcerer();

	Sorcerer &operator=(const Sorcerer& other);

	void polymorph(Victim const &victim) const;
	
	std::string getName();

	std::string getTitle();

};
	std::ostream &operator<<(std::ostream &output, Sorcerer &sorcerer);

#endif