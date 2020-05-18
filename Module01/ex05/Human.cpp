/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 20:30:48 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 20:49:22 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain &Human::getBrain()
{
	return  brain;
}

std::string Human::identify()
{
	return (brain.identify());
}