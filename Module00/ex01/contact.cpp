/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 18:26:04 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/08 02:49:58 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"

std::string contact::fields[11] =
{
	"First_Name : ",
	"Last_Name : ",
	"Nickname : ",
	"Login : ",
	"Address : ",
	"Email_Adress : ",
	"Phone_Number : ",
	"Birthday_Date : ",
	"Favorite_Meal : ",
	"Underwear_Color : ",
	"Darkest_Secret : "
};
contact::contact()
{
	for (int i = 0; i < 11; i++)
		info[i] = "";
}

contact::~contact(){};

contact contact::fill()
{
	std::string input;
	
	for (int i = 0; i < 11; i++)
	{
		std::cout << fields[i] << std::endl;
		std::getline(std::cin, info[i]);
		if ((i == 0 || i == 1 || i == 6 ) && info[i].length() == 0)
		{
			std::cout << "This field cannot be empty. Please enter valid informations" << std::endl;
			i--;
		}
	}
	std::cout << "Contact added!" << std::endl;
	return *this;
}

void contact::display_first(int index)
{
	int pad;
	
	std::cout << "|" << std::to_string(index) << "        |" ;
	for (int i = 0; i < 3; i++)
	{
		if (info[i].length() > 10)
			std::cout << info[i].substr(0, 9) + "." ;
		else
		{
			pad = 10 - info[i].length();
			std::cout << info[i];
			for (int i = 0; i < pad; i++)
				std::cout << " ";
		}
		std::cout << "|";
	}
	std::cout << "\n";
}

void contact::display_all()
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << fields[i] << info[i] << std::endl;
	}
}