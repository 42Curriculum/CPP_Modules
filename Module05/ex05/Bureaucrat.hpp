/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 03:41:05 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/13 01:38:28 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
private:

	std::string const name;
	
	int grade;
public:
	Bureaucrat(){}
	
	Bureaucrat(std::string const &name, int grade);
	
	Bureaucrat(Bureaucrat const &copy);
	
	virtual ~Bureaucrat() {}

	Bureaucrat &operator=(Bureaucrat const &copy);

	std::string const &getName() const;
	
	int getGrade() const;

	void incrementGrade();

	void decrementGrade();
	
	class GradeTooHighException : public std::exception {virtual const char* what() const throw();};
	
	class GradeTooLowException : public std::exception {virtual const char* what() const throw();};

	void signForm(Form &form) const;

	void executeForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif