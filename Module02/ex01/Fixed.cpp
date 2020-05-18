/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:38:59 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 20:57:10 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->nb = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	this->nb = copy.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return nb;
}

void Fixed::setRawBits(int const rawbits){nb = rawbits;}

Fixed &Fixed::operator=(Fixed const &copy)
{
	this->nb =  copy.getRawBits();
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

Fixed::Fixed(int const nb)
{
	std::cout << "int constructor called" << std::endl;
	this->nb = (nb << rawbits);
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->nb = roundf(nb * (1 << rawbits));
}

std::ostream &operator<<(std::ostream &ostr, Fixed &nb)
{
    ostr << nb.toFloat();
    return ostr;
}

float Fixed::toFloat() const{return ((float)nb / (float)(1 << rawbits));}

int Fixed::toInt() const{return nb >> rawbits;}

std::ostream &operator<<(std::ostream &ostr, Fixed const &nb)
{
    ostr << nb.toFloat();
    return ostr;
}