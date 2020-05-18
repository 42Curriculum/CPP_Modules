/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 05:24:36 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 01:54:08 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
protected:
	std::string name;
public:
	Victim(std::string const &name);

	Victim(const Victim& other);
	
	virtual ~Victim();

	Victim &operator=(const Victim &copy);

	void getPolymorphed() const;
	
	std::string GetName();
};

	std::ostream &operator<<(std::ostream &output, Victim &victim);

#endif