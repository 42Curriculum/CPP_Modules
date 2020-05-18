/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 04:46:58 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 07:17:16 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{
private:

	std::string const &name;
	
	bool sign_ed;
	
	int const sign_g;
	
	int const exec_g;
public:
	Form();
	
	Form(std::string const &name, int const signGrade, int const executeGrade);
	
	Form(Form const &other);
	
	virtual ~Form(){}

	Form &operator=(Form const &other);
	
	int s_grade() const;
	
	int exe_grade() const;

	bool isSigned() const;

	void beSigned(Bureaucrat const &bureaucrat);
	
	std::string const &getName() const;
	
	class GradeTooHighException: public std::exception {virtual const char* what() const throw();};
	
	class GradeTooLowException: public std::exception {virtual const char* what() const throw();};
	
	class FormAlreadySignedException: public std::exception {virtual const char* what() const throw();};
};

std::ostream &operator<<(std::ostream &output, Form const &form);

#endif