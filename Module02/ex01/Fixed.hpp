/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:39:25 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/11 20:53:45 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int nb;
	static const int rawbits = 8;
public:
	Fixed();

	Fixed(int const nb);

	Fixed(float const nb);
	
	Fixed(Fixed const &copy);
	
	~Fixed();

	int getRawBits() const;

	void setRawBits(int const rawbits);

	Fixed &operator=(Fixed const &copy);

	float toFloat() const;
	
	int toInt() const;

};
	std::ostream &operator<<(std::ostream &ostr, Fixed const &nb);
#endif