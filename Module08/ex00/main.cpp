/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 14:40:17 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 14:40:17 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
# include <vector>
# include <list>
# include "easyfind.hpp"
# include <deque>
# include <stack>
# include <string>

int main()
{
		std::vector<int> vec(10);
		std::list<int> lst;
		std::deque<int> deque;

		for (int i = 0; i < 10; i++)
		{
			vec[i] = rand() % 42 + 1;
			lst.push_back(i);
			deque.push_back(i);
		}
		int val1 = 42, val2 = 4;
		std::vector<int>::iterator foundv = easyfind(vec, val1);
		std::list<int>::iterator foundl = easyfind(lst, val1);
		std::deque<int>::iterator foundd = easyfind(deque, val1);
		if (foundv == vec.end())
			std::cout << std::to_string(val1) << " is not in vector\n" << std::endl;
		else 
			std::cout << std::to_string(val1) << " is in vector\n" << std::endl;
		if (foundl == lst.end())
			std::cout << std::to_string(val1) << " is not in list\n" << std::endl;
		else
				std::cout << std::to_string(val1) << " is in list\n" << std::endl;
		if (foundd == deque.end())
			std::cout << std::to_string(val1) << " is not in deque\n" << std::endl;
		else
			std::cout << std::to_string(val1) << " is in deque\n" << std::endl;
		foundv = easyfind(vec,val2);
		foundl = easyfind(lst,val2);
		foundd = easyfind(deque,val2);
		if (foundv == vec.end())
			std::cout << std::to_string(val2) << " is not in vector\n" << std::endl;
		else 
			std::cout << std::to_string(val2) << " is in vector\n" << std::endl;
		if (foundl == lst.end())
			std::cout << std::to_string(val2) << " is not in list\n" << std::endl;
		else
				std::cout << std::to_string(val2) << " is in list\n" << std::endl;
		if (foundd == deque.end())
			std::cout << std::to_string(val2) << " is not in deque\n" << std::endl;
		else
			std::cout << std::to_string(val2) << " is in deque\n" << std::endl;
}