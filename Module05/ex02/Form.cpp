/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 04:46:55 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 10:44:10 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int const sign_g, int const exec_g) : name(name),sign_ed(false), sign_g(sign_g), exec_g(exec_g)
{
	if (sign_g < 1 || exec_g < 1)
		throw Form::GradeTooHighException();
	else if (sign_g > 150 || exec_g > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &copy):name(copy.name),sign_ed(copy.sign_ed), sign_g(copy.sign_g), exec_g(copy.exec_g)
{
	if (sign_g < 1 || exec_g < 1)
		throw Form::GradeTooHighException();
	else if (sign_g > 150 || exec_g > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(Form const &copy)
{
	sign_ed = copy.sign_ed;
	return *this;
}

int Form::s_grade() const{return sign_g;}

int Form::exe_grade() const{return exec_g;}

bool Form::isSigned() const{return sign_ed;}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->sign_g)
		throw Form::GradeTooLowException();
	else if (sign_ed)
		throw Form::FormAlreadySignedException();
	this->sign_ed = true;
}

std::string const &Form::getName() const{return name;}

const char* Form::GradeTooHighException::what() const throw(){return "FormException: Grade too High";}

const char* Form::GradeTooLowException::what() const throw(){return "FormException: Grade too Low";}

const char* Form::FormAlreadySignedException::what() const throw(){return "FormException: The Form is already signed";}

const char* Form::UnsignedFormException::what() const throw() {return "FormException: Unsigned form can not be executed";}

void Form::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > exec_g)
		throw Form::GradeTooLowException();
	if (!sign_ed)
		throw Form::UnsignedFormException();
}

std::ostream &operator<<(std::ostream &output, Form const &form)
{
	std::string str;
	
	if (form.isSigned())
		str = "Has been signed";
	else
		str = "Has not been signed";
	output << "[" + form.getName() + "] " + str + "{Signeable : Grade " << form.s_grade() << " Executable " << form.exe_grade() << "}" <<std::endl;
	return output;
}