/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 04:37:32 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 01:19:11 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat SHINDEIRU("OMAE WA MOU", 90);
	Form form("TiredForm", 5, 10);
	std::cout << SHINDEIRU << std::endl;
	SHINDEIRU.incrementGrade();
	std::cout << SHINDEIRU << std::endl;
	SHINDEIRU.decrementGrade();
	std::cout << SHINDEIRU << form << std::endl;

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

	try
	{
		Form nope("Nope", 100, -100);
		std::cout << nope << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	SHINDEIRU.signForm(form);
	Form owo("owo", 100,50);
	std::cout << owo << std::endl;
	SHINDEIRU.signForm(owo);
	std::cout << SHINDEIRU << owo << std::endl;
	
	return (0);
}
