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

	Bureaucrat const *sign;

	Bureaucrat const *exec;

public:
	OfficeBlock();

	OfficeBlock(Intern &intern, Bureaucrat const &sign, Bureaucrat const &exec);

	virtual ~OfficeBlock() {}

	void setIntern(Intern &intern);
	
	void setSigner(Bureaucrat const &sign);

	void setExecutor(Bureaucrat const &exec);

	class AlreadyAssignedException: public std::exception {virtual const char* what() const throw();};
	
	class MissingPerson: public std::exception {virtual const char* what() const throw();};

	void doBureaucracy(std::string const &form, std::string const &target);

	bool isfull();
};

#endif