/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 20:59:42 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 20:59:42 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : assigned(0), intern(NULL), sign(NULL), exec(NULL) {}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &sign, Bureaucrat &exec) : assigned(0) , intern(&intern), sign(&sign), exec(&exec)
{
	if (this->intern)
		assigned++;
	if (this->sign)
		assigned++;
	if (this->exec)
		assigned++;
}

void OfficeBlock::setIntern(Intern &intern)
{
	if (this->intern == &intern)
		throw AlreadyAssignedException();
	assigned++;
	this->intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat &sign)
{
	if (this->sign)
		throw AlreadyAssignedException();
	assigned++;
	this->sign = &sign;
}

void OfficeBlock::setExecutor(Bureaucrat &exec)
{
	if (this->exec)
		throw AlreadyAssignedException();
	assigned++;
	this->exec = &exec;
}

void OfficeBlock::doBureaucracy(std::string const &form, std::string const &target)
{
	if (assigned < 3)
		throw MissingPerson();
	Form *forms =intern->makeForm(form, target);
	try
	{
		sign->signForm(*forms);
		exec->executeForm(*forms);
	}
	catch(std::exception& e)
	{
		delete forms;
		throw;
	}
	delete forms;
}

const char* OfficeBlock::AlreadyAssignedException::what() const throw(){return "This position is already taken";}

const char* OfficeBlock::MissingPerson::what() const throw(){return "There are not enough people in the office";}