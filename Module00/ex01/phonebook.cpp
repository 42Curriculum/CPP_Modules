/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 00:11:46 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/08 02:44:38 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook()
{
	len = -1;
}

phonebook::~phonebook(){}

int phonebook::addcontact()
{
	if (len <= 6)
	{
		len++;
		cont[len].fill();
		return 1;
	}
	prompt();
	return (0);
}

int phonebook::prompt()
{
	std::string input;
	
	std::cout << "Contact could not be added. The list is full.\n Would you like to replace a contact?\nType RETURN to return to the menu" << std::endl;
	std::getline(std::cin, input);
	if (input =="RETURN")
		return (0);
	else if (input == "REPLACE")
	{
		int index;
		std::cout << "Replace which contact?" << std::endl;
		std::cout << "|Index    |FirstName |LastName  |Nickname  |" << std::endl;
		std::cout << "|---------|----------|----------|----------|" << std::endl;
		for (int i = 0; i < len + 1; i++)
			cont[i].display_first(i);
		while (42)
		{
			std::getline(std::cin, input);
			if (input == "RETURN")
				return (0);
			for (int i = 0; i < input.length(); i++)
			{
				if (!isdigit(input[i]))
				{
					std::cout << "Invalid contact. Please enter a valid number" << std::endl;
					input = "-1";
					break ;
				}
			}
			index = std::stoi(input); 
			if (index < 0 || index > len)
				std::cout << "Invalid contact. Please enter a valid number or type RETURN" << std::endl;
			else
			{
				cont[index].fill();
				break ;
			}
		}
		return (1);
	}
	return 0;
}

void phonebook::search()
{
	std::string input;
	int index;
	int state;

	std::cout << "|Index    |FirstName |LastName  |Nickname  |" << std::endl;
	std::cout << "|---------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < len + 1; i++)
		cont[i].display_first(i);
	while (42)
	{
		std::getline(std::cin, input);
		if (input.length() > 0)
		{	
			for (int i = 0; i < input.length(); i++)
			{
				if (!isdigit(input[i]))
				{
					input = "-1";
					break ;
				}
			}
			index = std::stoi(input); 
			if (index < 0 || index > len)
				std::cout << "Invalid contact. Please enter a valid number" << std::endl;
			else 
				break ;
		}
	}
	cont[index].display_all();
}