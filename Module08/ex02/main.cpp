/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 22:23:17 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 22:23:17 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> stack;
	stack.push(42);
	stack.push(24);
	stack.push(69);

	std::cout << "size: " << stack.size() << std::endl;
	std::cout << "top: " << stack.top() << std::endl;
	stack.pop();
	std::cout << "size: " << stack.size() << std::endl;
	std::cout << "top: " << stack.top() << std::endl;


	for (int i = 0; i < 6; i++)
		stack.push(rand() %42);
	MutantStack<int>::iterator itb = stack.begin();
	MutantStack<int>::iterator ite = stack.end();
	MutantStack<int>::reverse_iterator rib = stack.rbegin();
	MutantStack<int>::reverse_iterator rie = stack.rend();
	std::cout << "Beginning to end" << std::endl;

	for (; itb != ite; itb++)
		std::cout << *itb << " ";
	std::cout <<std::endl;
	
	std::cout << "Reverse" << std::endl;

	for (; rib != rie; rib++)
		std::cout << *rib << " ";
	std::cout <<std::endl;
}