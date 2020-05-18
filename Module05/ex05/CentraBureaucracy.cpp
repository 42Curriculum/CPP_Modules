/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentraBureaucracy.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 23:28:03 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 23:28:03 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy() : bcount(0), qcount(0), queue()
{
	for (int i = 0; i < 20; i++)
		this->offices[i].setIntern(interns[i]);
}

CentralBureaucracy::~CentralBureaucracy(){}

const char* CentralBureaucracy::NoSpace::what() const throw(){return "There are no more jobs to fill";}

void CentralBureaucracy::add_worker(Bureaucrat const &bureaucrat)
{
	if (bcount == 40)
		throw CentralBureaucracy::NoSpace();
	int office = bcount / 2;
	int post = (bcount % 2);
	if (post == 0)
		this->offices[office].setSigner(bureaucrat);
	else
	{
		this->offices[office].setExecutor(bureaucrat);
	}
	bcount++;
}

void CentralBureaucracy::add_form(std::string const &target){queue.push(target);qcount++;}

void CentralBureaucracy::doBureaucracy(void)
{
	static std::string forms[3] = {
		"pardon",
		"robotomy",
		"shrub"
	};
	int n  = 0;
	for (int i = 0; i < qcount; i++)
	{	
		if (offices[n].isfull())
		{
				try
			{
				this->offices[n].doBureaucracy(forms[rand() % 3], queue.front());
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		else
			n = 0;
		if (n == 20)
			n = 0;
		else
			n++;
	}
}

CentralBureaucracy &operator<<(CentralBureaucracy &central, Bureaucrat &worker)
{
	central.add_worker(worker);
	return central;
}

CentralBureaucracy &operator<<(CentralBureaucracy &central, std::string const &target)
{
	central.add_form(target);
	return central;
}