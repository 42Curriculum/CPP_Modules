/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 04:24:06 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/15 03:21:19 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : name(copy.name), grade(copy.grade) {}

const char* Bureaucrat::GradeTooHighException::what() const throw(){return "BureaucratException: Grade too high";}

const char* Bureaucrat::GradeTooLowException::what() const throw(){return "BureaucratException: Grade too lw";}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	grade = copy.grade;
	return *this;
}

std::string const &Bureaucrat::getName() const{return name;}

int Bureaucrat::getGrade() const{return grade;}

void Bureaucrat::incrementGrade(){(grade - 1 < 1) ? (throw Bureaucrat::GradeTooHighException()) : (grade--);}

void Bureaucrat::decrementGrade(){(grade + 1 > 150) ? (throw Bureaucrat::GradeTooLowException()) : (grade++);}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << "(Grade : " + std::to_string(bureaucrat.getGrade()) + " Bureaucrat) <" << bureaucrat.getName() << "> \n";
	return output;
}