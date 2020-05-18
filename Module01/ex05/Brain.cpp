/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 20:06:23 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 20:46:27 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <iostream>

Brain::Brain(int memory)
{
	this->memory = memory;
}

Brain::~Brain(){}

int Brain::remember() {return memory;}

std::string Brain::identify() const
{
	long address = (long)this;

	std::ostringstream os;
	os << "0x" << std::uppercase << std::hex << address;
	return (os.str());
}