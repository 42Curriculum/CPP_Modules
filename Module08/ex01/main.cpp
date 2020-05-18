/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 19:48:51 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 19:48:51 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Span.hpp"

int main()
{
	std::string input;
	std::cout << "How mnay numbers in span?\n";
	std::getline(std::cin, input);
	int n = std::stoi(input);
	Span span(n);
	while (42)
	{
		std::cout << " ADD SHORTEST LONGEST \n";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "Input int ";
			std::getline(std::cin, input);
			int n = std::stoi(input);
			span.addNumber(n);
		}
		if (input == "LONGEST")
		{
			std::cout << "Longest span : " << std::to_string(span.longestSpan()) << std::endl;
		}
		if (input == "SHORTEST")
		{
			std::cout << "Shortest span : " << std::to_string(span.shortestSpan()) << std::endl;
		}
	}
	
}