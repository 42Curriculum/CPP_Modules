/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 17:06:27 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 17:06:27 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <cctype>
#include <algorithm>

Intern::Intern()
{
	names["presidential"] = new PresidentialPardonForm("default");
	names["pardon"] = new PresidentialPardonForm("default");
	names["shrub"] = new ShrubberyCreationForm("default");
	names["robotomy"] = new RobotomyRequestForm("default");
}

Intern::Intern(Intern const &copy){(void)copy;}

Intern::~Intern(){}

const char* Intern::FormDoesNotExistException::what() const throw(){return "InternException: Form does not exist";}

Intern &Intern::operator=(Intern const &copy)
{
	(void)copy;
	return *this;
}

Form *Intern::makeForm(std::string const &requested, std::string const &target) const
{
	Form *form = NULL;
	std::string lower_target(requested);

	std::transform(lower_target.begin(), lower_target.end(), lower_target.begin(),
    [](unsigned char c){ return std::tolower(c); });
	for (int i = 0; i < 4; i++)
	{
		if (lower_target.find(keys[i]) != std::string::npos)
		{
			form = names.at(keys[i])->makenew(target);
			std::cout << "Intern creates " << *form << std::endl;
			return form;
		}
	}
	if (form == NULL)
	{
		std::cout << requested << " does not exist" << std::endl;
		throw Intern::FormDoesNotExistException();
	}
	return NULL;
}