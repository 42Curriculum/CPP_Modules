/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 06:49:58 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 20:56:14 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:

	std::string const target;
	
	static std::string const trees[2];
	
public:
	ShrubberyCreationForm(){}
	
	ShrubberyCreationForm(std::string const &target);
	
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	
	virtual ~ShrubberyCreationForm();

	static std::string const &name;

	class TargetFileOpenException: public std::exception {virtual const char* what() const throw();};
	
	class WriteException: public std::exception {virtual const char* what() const throw();};

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &copy);

	void execute(Bureaucrat const &executor) const;

	Form* makenew(std::string const &newtarget);
};

#endif
