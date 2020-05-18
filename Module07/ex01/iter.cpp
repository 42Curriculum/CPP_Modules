/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 07:10:29 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 07:10:29 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

template<typename T>
void iter(T *ptr, size_t len, void (*func)(T const &arg))
{
	for (size_t i = 0; i < len; i++)
		(*func)(ptr[i]);
}

template<typename T>
void display(T const &value){std::cout << value << "";}

int main()
{
	int ar[5] = { 0, 1, 2, 3, 4 };
	std::string str[3] = { "owo", "uwu", "hehehehehe"};
	iter(ar, 3, &display); std::cout << std::endl;
	iter(ar, 5, &display); std::cout << std::endl;
	iter(str, 3, &display); std::cout << std::endl;
	iter(str, 2, &display); std::cout << std::endl;
	iter(str, 1, &display); std::cout << std::endl;
		
}