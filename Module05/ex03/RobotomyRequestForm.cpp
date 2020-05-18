/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 06:49:31 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 20:01:52 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::string const &RobotomyRequestForm::name = std::string("Robotomy Request");

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(RobotomyRequestForm::name, 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy), target(copy.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	(void)copy;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &Bureaucrat) const
{
	Form::execute(Bureaucrat);
	std::cout << "* DRILLING NOISES *" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->target << " has  been robotomized! SUCCESS!!" << std::endl;
	else
		std::cout << this->target << " ....Could not robotomize...." << std::endl;
}

Form* RobotomyRequestForm::setTarget(std::string const &newtarget) const
{
	Form *form = new RobotomyRequestForm(newtarget); 
	return form;
}

