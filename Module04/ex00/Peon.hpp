/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 05:25:54 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 01:56:30 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(std::string const &name);
	
	Peon(Peon const &peon);

	~Peon();

	Peon &operator=(const Peon& other);

	void getPolymorphed() const;
};

#endif
