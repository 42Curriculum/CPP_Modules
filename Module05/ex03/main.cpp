/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 04:37:32 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 20:46:56 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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

	
	try
	{
		Form *rob = new RobotomyRequestForm("Orange Man");
		std::cout << rob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Form *pres = new PresidentialPardonForm("PardonMeSir");
		std::cout << pres << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Form *shrub = new ShrubberyCreationForm("Tress");
		std::cout << shrub << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	Form *shrub = new ShrubberyCreationForm("Tress");
	Form *pres = new PresidentialPardonForm("PardonMeSir");
	Form *rob = new RobotomyRequestForm("Orange Man");

	SHINDEIRU.executeForm(*shrub);
	SHINDEIRU.executeForm(*pres);
	SHINDEIRU.executeForm(*rob);
	
	Bureaucrat boss("lvl100MafiaBoss", 1);
	boss.signForm(*shrub);
	boss.signForm(*pres);
	boss.signForm(*rob);

	std::cout << shrub << pres << rob << std::endl;

	boss.executeForm(*shrub);
	SHINDEIRU.executeForm(*shrub);
	
	try
	{
		SHINDEIRU.executeForm(*pres);
		std::cout << shrub << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		SHINDEIRU.executeForm(*rob);
		std::cout << shrub << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	
	boss.executeForm(*pres);
	boss.executeForm(*rob);

	Intern someIntern;
	
	Form *sh = someIntern.makeForm("shruberry", "home");
	boss.signForm(*sh);
	boss.executeForm(*sh);
	return (0);
}