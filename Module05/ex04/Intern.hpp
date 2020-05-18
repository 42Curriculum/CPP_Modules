/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 17:06:14 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 17:06:14 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include <map>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:

	std::map<std::string, Form*> names;
	std::string keys[4] {
		"presidential", "pardon",
		"shrub", "robotomy"
	};
public :
	Intern();

	Intern(Intern const &other);

	virtual ~Intern();

	class FormDoesNotExistException: public std::exception {virtual const char* what() const throw();};

	Intern &operator=(Intern const &other);

	Form *makeForm(std::string const &requested, std::string const &target) const;
};

#endif
