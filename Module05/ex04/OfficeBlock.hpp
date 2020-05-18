/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 20:59:38 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 20:59:38 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP
# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock
{
private:
	int assigned;
	
	Intern *intern;

	Bureaucrat *sign;

	Bureaucrat *exec;

public:
	OfficeBlock();

	OfficeBlock(Intern &intern, Bureaucrat &sign, Bureaucrat &exec);

	virtual ~OfficeBlock() {}

	void setIntern(Intern &intern);
	
	void setSigner(Bureaucrat &sign);

	void setExecutor(Bureaucrat &exec);

	class AlreadyAssignedException: public std::exception {virtual const char* what() const throw();};
	
	class MissingPerson: public std::exception {virtual const char* what() const throw();};

	void doBureaucracy(std::string const &form, std::string const &target);
};

#endif