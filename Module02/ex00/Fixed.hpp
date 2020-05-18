/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:39:25 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/10 00:04:18 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int value;
	static const int rawbits = 8;
public:
	Fixed();
	
	Fixed(Fixed &copy);
	
	~Fixed();

	int getRawBits() const;

	void setRawBits(int const rawbits);

	Fixed &operator=(Fixed &copy);
};
#endif