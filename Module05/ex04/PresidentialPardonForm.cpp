/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 06:49:17 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 20:09:30 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string const &PresidentialPardonForm::name = std::string("Presidential Pardon");

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(PresidentialPardonForm::name, 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy), target(copy.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	(void)copy;
	return *this;
}

Form* PresidentialPardonForm::makenew(std::string const &newtarget)
{
	Form *form = new PresidentialPardonForm(newtarget); 
	return form;
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	Form::execute(bureaucrat);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

