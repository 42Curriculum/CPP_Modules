/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:03:47 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/13 14:03:47 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <float.h>
#include <math.h>
#include <limits.h>

# define CHAR 1
# define INT 2
# define FLOAT 3
# define DOUBLE 4
# define POSINF 5
# define NEGINF 6
# define NANA 7
# define ERR -1
# define ND -2
# define NOEX -3


int error_check(std::string &arg)
{
	int i = 0;
	bool dot = false, f = false;

	if (arg[0] == '-' || arg[0] == '+')
		i++;
	while (arg[i])
	{
		if (arg[i] == '.')
		{
			if (dot == true)
				return ERR;
			else
				dot = true;
		}
		else if (arg[i] > '9' || arg[i] < '0')
		{
			if (arg[i] == 'f')
			{
				if (f == false)
					f = true;
				else
					return ERR;	
			}
			else
				return ERR;
		}
		i++;
	}
	if (f == true && arg[arg.length() -1] != 'f')
		return ERR;
	return 1;
}

void eval_char(char *str)
{
	std::string print(str);
	std::cout << "Char : " << str << std::endl;
	std::cout << "Int : " << std::to_string((int)str[0]) << std::endl;
	std::cout << "Float : " <<  std::to_string((int)str[0]) << ".0f" << std::endl;
	std::cout << "Double : " << std::to_string((int)str[0]) << ".0" << std::endl;
}

void eval_int(char *str)
{
	int sign = 1, i = 0;
	std::string print(str);
	if (str[0] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[0] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i] == '0')
		i++;
	print = print.substr(i, print.length());
	std::cout << "Char : " << print << std::endl;
	std::cout << "Int : " << std::stoi(print) * sign << std::endl;
	std::cout << "Float : " << std::stoi(print) * sign << ".0f" << std::endl;
	std::cout << "Double : " << std::stoi(print) * sign << ".0" << std::endl;
}

void eval_float(char *str)
{
	int sign = 1, i = 0;
	std::string print(str);
	if (str[0] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[0] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i] == '0')
		i++;
	print = print.substr(i, print.length());
	long double n = std::stold(print.substr(0, print.length())) * sign;
	if (n > 126 || n < 32)
		std::cout << "Char : Non displayable"<< std::endl;
	else
		std::cout << "Char : " << std::stoi(str) << std::endl;
	if (n > INT_MAX ||  n < INT_MIN)
		std::cout << "Int : cannot fit in an int" << std::endl;
	else
		std::cout << "Int : " << (int)n << std::endl;
	if (n > FLT_MAX)
		std::cout << "Float : cannot fit in a float" << std::endl;
	else if (sign == 1)
		std::cout << "Float : " << print << std::endl;
	else
		std::cout << "Float : " << "-" << print << std::endl;
	if (n > DBL_MAX)
		std::cout << "Double : cannot fit in a Double" << std::endl;
	else if (sign == 1)
		std::cout << "Double : " << print.substr(0, print.length() -1) << std::endl;
	else if (sign == -1)
		std::cout << "Double : -" << print.substr(0, print.length() -1) << std::endl;
}

void eval_double(char *str)
{
	int sign = 1, i = 0;
	std::string print(str);
	if (str[0] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[0] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i] == '0')
		i++;
	print = print.substr(i, print.length());
	long double n = std::stold(print.substr(0, print.length())) * sign;
	if (n > 126 || n < 32)
		std::cout << "Char : Non displayable"<< std::endl;
	else
		std::cout << "Char : " << std::stoi(str) << std::endl;
	if (n > INT_MAX ||  n < INT_MIN)
		std::cout << "Int : cannot fit in an int" << std::endl;
	else
		std::cout << "Int : " << (int)n << std::endl;
	if (n > FLT_MAX)
		std::cout << "Float : cannot fit in a float" << std::endl;
	else if (sign == 1)
		std::cout << "Float : " << print << "f" << std::endl;
	else
		std::cout << "Float : " << "-" << print << "f" << std::endl;
	if ( n > DBL_MAX)
		std::cout << "Double : cannot fit in a Double" << std::endl;
	else if (sign == -1)
		std::cout << "Double : " << "-" << print << std::endl;
	else
		std::cout << "Double : " << print << std::endl;
}

void handle_Exceptions(int type)
{
	if (type < 0)
	{
		if (type == ERR)
			std::cout << "Argument cannot be empty\n";
		if (type == ND)
			std::cout << "Char must be printavle\n";
		return ;
	}

	std::cout << "Char : Impossible\nInt : Impossible\n";
	if (type == POSINF)
		std::cout << "Float : +inff\nDouble : +inf\n";
	else if (type == NEGINF)
		std::cout << "Float : -inff\nDouble : -inf\n";
	else if (type == NANA)
		std::cout << "Float : nanf\nDouble : nan\n";
}

int get_type(char *arg)
{
	std::string str(arg);

	if (str.length() == 0)
		return  ERR;
	else if (str.length() == 1)
	{
		if (str[0] >='0' && str[0] <='9')
			return INT;
		if (str[0] >=' ' && str[0] <='~')
			return CHAR;
		return ND;
	}
	if (str == "-inff" || str == "inf")
		return NEGINF;
	if (str == "+inff" || str == "+inf")
		return POSINF;
	if (str == "nanf" || str == "nan")
		return NANA;
	int error = error_check(str);
	if (error < 0)
		return error;
	int i = 0;
	while(arg[i])
	{
		if (arg[i] == '.')
		{
			if (!(str[str.length() - 1] == 'f'))
				return DOUBLE;
			return FLOAT;
		}
		i++;
	}
	if (str[str.length() - 1] == 'f')
		return FLOAT;
	return INT;
}

int main(int argc, char **argv)
{
	std::string arg;
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return 1;
	}
	int type = get_type(argv[1]);
	printf("TYPE %d\n", type);
	if (type == ERR)
	{
		std::cout << "Invalid argument\n";
		return 0;
	}
	if (type > 4 || type < 0)
	{
		handle_Exceptions(type);
		return 0;
	}
	if (type == CHAR)
	{
		eval_char(argv[1]);
		return 0;
	}

	if (type == INT)
	{
		eval_int(argv[1]);
		return 0;
	}
	if (type == FLOAT)
	{
		eval_float(argv[1]);
		return 0;
	}
	if (type == DOUBLE)
	{
		eval_double(argv[1]);
		return 0;
	}
	return 0;
}