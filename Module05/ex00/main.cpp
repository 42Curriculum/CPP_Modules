/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 04:37:32 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 01:21:18 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat SHINDEIRU("OMAE WA MOU", 100);
	std::cout << SHINDEIRU << std::endl;
	SHINDEIRU.incrementGrade();
	std::cout << SHINDEIRU << std::endl;
	SHINDEIRU.decrementGrade();
	std::cout << SHINDEIRU << std::endl;

	try
	{
		Bureaucrat bob("Boblin the Goblin", -42);
		std::cout << bob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bob("Boblin the Goblin", 4269);
		std::cout << bob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
