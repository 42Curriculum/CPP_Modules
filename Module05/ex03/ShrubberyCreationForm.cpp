/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 06:49:50 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 20:54:38 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

std::string const &ShrubberyCreationForm::name = std::string("Shrubbery Creation");

std::string const ShrubberyCreationForm::trees[2] = {
"            .        +          .      .          .\n"\
"     .            _        .                    .\n"
"  ,              /;-._,-.____        ,-----.__\n"
" ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
"  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
"                      ,    `./  \\:. `.   )==-'  .\n"
"    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"\
".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"\
"       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"\
"  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"\
"   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"\
"              \\:  `  X` _| _,\\/'   .-'\n"\
".               \":._:`\\____  /:'  /      .           .\n"\
"                    \\::.  :\\/:\'                +\n"\
"   .                 `.:.  /:\'  }      .\n"\
"           .           ):_(:;   \\           .\n"\
"                      /:. _/ ,  |\n"\
"                   . (|::.     ,`                  .\n"\
"     .                |::.    {\\n"\
"                      |::.\\  \\ `.\n"\
"                      |:::(\\    |\n"\
"              O       |:::/{ }  |                  (o\n"\
"               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"\
"          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"\
"dew   ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~\n",
"        'b      *\n"\
"         '$    #.\n"\
"          $:   #:\n"\
"          *#  @):\n"\
"          :@,@):   ,.**:'\n"\
",         :@@*: ..**'\n"\
" '#o.    .:(@'.@*\"'\n"\
"    \'bq,..:,@@*\'   ,*\n"\
"    ,p$q8,:@)\'  .p*\'\n"\
"   '    '@@Pp@@*'\n"\
"         Y7'.'\n"\
"        :@):.\n"\
"       .:@:'.\n"\
"     .::(@:.      \n"
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):Form(ShrubberyCreationForm::name, 145, 137), target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy), target(copy.target){}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const char* ShrubberyCreationForm::TargetFileOpenException::what() const throw(){return "ShrubberyCreationFormException: Cannot open file";}

const char* ShrubberyCreationForm::WriteException::what() const throw(){return "ShrubberyCreationFormException: Cannot write to file";}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	(void)copy;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &Bureaucrat) const
{
	Form::execute(Bureaucrat);
	std::string name = (target + "_shrubbery");
	std::ofstream newfile(name, std::ios::out | std::ios::app);
	newfile << trees[0] << trees[1] << std::endl;
	newfile.close();
}

Form* ShrubberyCreationForm::makenew(std::string const &newtarget)
{
	Form *form = new ShrubberyCreationForm(newtarget); 
	return form;
}

