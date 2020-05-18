/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 06:25:00 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 06:25:00 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <random>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <string>

Base *generate()
{
	int r = rand() % 30;

	if (r > 23)
		return (new A);
	else if (r > 15)
		return (new B);
	return (new C);
}

void identify_from_pointer(Base *ptr)
{
	if (dynamic_cast<A*>(ptr) != nullptr)
	{
		std::cout << "A";
		return ;
	}
	if (dynamic_cast<B*>(ptr) != nullptr)
	{
			std::cout << "B";
			return ;
	}
	if (dynamic_cast<C*>(ptr) != nullptr)
	{
			std::cout << "C";
			return ;
	}
}

void identify_from_reference(Base &ptr) {identify_from_pointer(&ptr);}

int main()
{
	std::string input;
	while (42)
	{
		std::cout << "Type RUN\n";
		std::getline(std::cin, input);
		if (input == "RUN")
		{
			Base *base = generate();

			std::cout << "From pointer :";
			identify_from_pointer(base);
			std::cout << ", from ref : ";
			identify_from_reference(*base);
			std::cout << std::endl;
			delete base;
	}
		
	}
}