/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 00:01:54 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/10 00:07:31 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	a.getRawBits();
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
	}