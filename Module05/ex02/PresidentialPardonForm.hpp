/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 06:49:04 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 19:57:58 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:


	std::string const target;
public:
	PresidentialPardonForm() {}
	
	PresidentialPardonForm(std::string const &target);
	
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	
	virtual ~PresidentialPardonForm();

	static std::string const &name;

	PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);

	void execute(Bureaucrat const &bureaucrat) const;
};

#endif
