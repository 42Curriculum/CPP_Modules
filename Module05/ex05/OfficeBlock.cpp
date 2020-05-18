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

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat const &sign, Bureaucrat const &exec) : assigned(0) , intern(&intern), sign(&sign), exec(&exec)
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

void OfficeBlock::setSigner(Bureaucrat const &sign)
{
	if (this->exec == &sign || this->sign == &sign)
		throw AlreadyAssignedException();
	assigned++;
	this->sign = &sign;
}

void OfficeBlock::setExecutor(Bureaucrat const &exec)
{
	if (this->exec == &exec || this->sign == &exec)
		throw AlreadyAssignedException();
	assigned++;
	this->exec = &exec;
}

void OfficeBlock::doBureaucracy(std::string const &form, std::string const &target)
{
	if (assigned < 3)
		throw MissingPerson();
	Form *forms = intern->makeForm(form, target);
	try
	{
		this->sign->signForm(*forms);
		this->exec->executeForm(*forms);
	}
	catch(std::exception& e)
	{
		delete forms;
		throw;
	}
	delete forms;
}

bool OfficeBlock::isfull(){return (assigned == 3);}

const char* OfficeBlock::AlreadyAssignedException::what() const throw(){return "This position is already taken";}

const char* OfficeBlock::MissingPerson::what() const throw(){return "There are not enough people in the office";}