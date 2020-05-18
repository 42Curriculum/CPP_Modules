/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 03:41:05 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 04:39:45 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>

class Bureaucrat
{
private:

	std::string const name;
	
	int grade;
public:
	Bureaucrat(){}
	
	Bureaucrat(std::string const &name, int grade);
	
	Bureaucrat(Bureaucrat const &other);
	
	virtual ~Bureaucrat() {}

	Bureaucrat &operator=(Bureaucrat const &other);

	std::string const &getName() const;
	
	int getGrade() const;

	void incrementGrade();

	void decrementGrade();
	
	class GradeTooHighException : public std::exception {virtual const char* what() const throw();};
	
	class GradeTooLowException : public std::exception {virtual const char* what() const throw();};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif