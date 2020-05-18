/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 04:37:32 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/13 02:32:46 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

int main()
{
	CentralBureaucracy centrale;
	
	int worker;
	int forms;
	std::string input;
	
	std::cout << "How many workers?\n";
	std::getline(std::cin, input);
	worker = std::stoi(input);
	
	std::cout << "How many forms?\n";
	std::getline(std::cin, input);
	forms = std::stoi(input);
	Bureaucrat *burr;
	for (int i = 0; i < worker; i++)
	{
	burr = new Bureaucrat(" CorpporateSlave" + std::to_string(i), rand() % 26 + 1);
		centrale.add_worker(*burr);
	}

	for (int i = 0; i < forms; i++)
	{
		centrale.add_form("Orange Man Bad");
	}
	centrale.doBureaucracy();
	return (0);
}