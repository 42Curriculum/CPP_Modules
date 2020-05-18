/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 17:29:01 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 23:16:59 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void ponyOnTheStack()
{
	Pony onTheStack("Stack_Boi");

	std::string input;
	std::cout << "The Pony is on the stack. Stack_Boi RUN, WALK, TROT. You can see his STATUS" << std::endl;
	while (42)
	{
		std::getline(std::cin, input);
		if (input == "RUN")
		{
			if (!(onTheStack.run()))
				break ;
		}
		else if (input == "WALK")
		{	
			if (!(onTheStack.walk()))
				break ;
		}
		else if (input == "TROT")
		{	
			if (!(onTheStack.trot()))
				break ;
		}
		else if (input == "STATUS")
			onTheStack.status();
		else
			std::cout << "The pony does not understand"<< std::endl;
	}
}

void ponyOnTheHeap()
{
	Pony *onTheHeap;
	std::string input;

	onTheHeap = new Pony("Heap_Chad");
	std::cout << "The Pony is on the Heap. Heap_Chad can RUN, WALK, TROT. You can see his STATUS" << std::endl;
	while (42)
	{
		std::getline(std::cin, input);
		if (input == "RUN")
		{
			if (!(onTheHeap->run()))
				break ;
		}
		else if (input == "WALK")
		{	
			if (!(onTheHeap->walk()))
				break ;
		}
		else if (input == "TROT")
		{	
			if (!(onTheHeap->trot()))
				break ;
		}
		else if (input == "STATUS")
			onTheHeap->status();
		else
			std::cout << "The pony does not understand"<< std::endl;
	}
	delete onTheHeap;
}

int main()
{
	std::string input;
	std::cout << "Stack or Heap?"<< std::endl;
	std::getline(std::cin, input);
		if (input == "STACK")
			ponyOnTheStack();
		else if (input == "HEAP")
			ponyOnTheHeap();
}