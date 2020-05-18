/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 06:49:17 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 10:46:07 by jjosephi         ###   ########.fr       */
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

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	Form::execute(bureaucrat);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
