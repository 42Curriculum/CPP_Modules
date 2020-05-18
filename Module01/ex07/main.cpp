/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 22:28:04 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 22:59:49 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

std::string makeline(std::string &line, std::string s1, std::string s2)
{
	std::stringstream strs;
	size_t n;
	size_t len(s1.length());

	for (size_t i = 0; i < line.length(); i++)
	{
		n = 0;
		while (line[i + n] == s1[n] && n < len)
			n++;
		if (n == len)
		{
			strs << s2;
			i += (n - 1);
		}
		else
			strs << line[i];
	}
	return (strs.str());
}

void errors(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file;

	if (filename.length() == 0)
		std::__throw_invalid_argument("Filename cannot be empty");
	file.open(filename);
	if (!s1.length())
		std::__throw_invalid_argument("String 1 cannot be empty");
	if (!s2.length())
		std::__throw_invalid_argument("String2 cannot be empty");
	if (!file.is_open())
		std::__throw_invalid_argument("File does not exist or could not be opened");
	file.close();
}

void setup(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file;
	std::ofstream newfile;
	std::string line;

	errors(filename,s1,s2);
	file.open(filename);
	newfile.open(filename + ".replace", std::ios::trunc);
	if (!newfile.is_open())
		throw "Could not create .replace file ";
	while (std::getline(file, line))
		newfile << makeline(line, s1, s2);
	newfile.close();
	file.close();
}


int main(int argc, char **argv)
{
	if (argc != 4)
		std::__throw_invalid_argument ("Invalid number of arguments");
	else
		setup(argv[1], argv[2], argv[3]);
	return 0;
}