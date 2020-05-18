/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 06:49:38 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 07:47:36 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:

	std::string const target;
public:
	RobotomyRequestForm() {}
	
	RobotomyRequestForm(std::string const &target);
	
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	
	virtual ~RobotomyRequestForm(){}

	static std::string const &name;

	RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);

	void execute(Bureaucrat const &Bureaucrat) const;
};

#endif
