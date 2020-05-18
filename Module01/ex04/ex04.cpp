/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 06:02:44 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 06:32:42 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string	str = std::string("HI THIS IS BRAIN");
	std::string	&str_ref = str;
	std::string	*str_ptr = &str;
	std::cout << "Reference: " << str_ref << std::endl;
	std::cout << "Pointer : " << *str_ptr << std::endl;
}
