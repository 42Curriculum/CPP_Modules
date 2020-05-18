/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 23:28:15 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 23:28:15 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP
# include "OfficeBlock.hpp"
# include <iostream> 
# include <queue> 

class CentralBureaucracy
{
private:
	OfficeBlock offices[20];

	Intern interns[20];

	int bcount;

	int qcount;

	std::queue<std::string> queue;
public:
	CentralBureaucracy();

	virtual ~CentralBureaucracy();

	class NoSpace: public std::exception {virtual const char* what() const throw();	};

	void add_worker(Bureaucrat const &bureaucrat);

	void add_form(std::string const &target);

	void doBureaucracy();
};

CentralBureaucracy &operator<<(CentralBureaucracy &, Bureaucrat &bureaucrat);

CentralBureaucracy &operator<<(CentralBureaucracy &, std::string const &target);

#endif