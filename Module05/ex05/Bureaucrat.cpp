/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 04:24:06 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/13 02:07:03 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : name(copy.name), grade(copy.grade) {}

const char* Bureaucrat::GradeTooHighException::what() const throw(){return "BureaucratException: Grade too High";}

const char* Bureaucrat::GradeTooLowException::what() const throw(){return "BureaucratException: Grade too Low";}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	grade = copy.grade;
	return *this;
}

std::string const &Bureaucrat::getName() const{return name;}

int Bureaucrat::getGrade() const{return grade;}

void Bureaucrat::incrementGrade(){(grade - 1 < 1) ? (throw Bureaucrat::GradeTooHighException()) : (grade--);}

void Bureaucrat::decrementGrade(){(grade + 1 > 150) ? (throw Bureaucrat::GradeTooLowException()) : (grade++);}

void Bureaucrat::executeForm(Form &form) const
{
	if (!form.isSigned())
	{
		std::cout<< "This form is not signed." << std::endl;
	}
	else if (form.exe_grade() < grade)
	{
		std::cout << name + "'s grade is too low to execute" + form.getName() << std::endl;
	}
	else
	{
		std::cout << name + " is executing" << form.getName() << std::endl;
		form.execute(*this);
	}
}

void Bureaucrat::signForm(Form &form) const
{
	if (form.isSigned())
	{
		std::cout<< "This form has already been signed." << std::endl;
	}
	else if (form.s_grade() < this->grade)
	{
		std::cout << name + "'s grade is too low to sign" + form.getName() << std::endl;
	}
	else
	{
		std::cout << "(Grade : " + std::to_string(grade) + " Bureaucrat) <" << name << ">  signed " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}


std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << "(Grade : " + std::to_string(bureaucrat.getGrade()) + " Bureaucrat) <" << bureaucrat.getName() << "> \n";
	return output;
}