/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 06:51:17 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 06:51:17 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void swap(T &arg1, T &arg2)
{
	T tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template<typename T>
T &min(T &arg1, T &arg2)
{
	if (arg2 > arg1)
		return (arg1);
	return (arg2);
}

template<typename T>
T &max(T &arg1, T &arg2)
{
	if (arg1 > arg2)
		return (arg1);
	return (arg2);
}

int main(void) {
	int a = 2,b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";std::string d = "chaine2";
	::swap(c, d);std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
	}