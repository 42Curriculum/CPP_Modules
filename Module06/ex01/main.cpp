/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 05:02:15 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 05:02:15 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

typedef struct s_data
{
	std::string s1;
	int n;
	std::string s2;
}				t_data;

void *serialize()
{
	static std::string al = "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ";
	char *raw;
	int n = rand() %4269;

	raw = new char[20];
	for (int i = 0; i < 8; i++)
		raw[i] = al[rand() % al.length()];
	*(raw + 8) = static_cast<int>(n);
	for (int i = 12; i < 20; i++)
		raw[i] = al[rand() % al.length()];
	return raw;
}

t_data *deserialize(void *raw)
{
	t_data *data = new t_data;

	data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return data;
}

int main()
{
	std::string input;
	while (42)
	{
		std::cout << "Type RUN\n";
		std::getline(std::cin, input);
		if (input == "RUN")
		{
			void *raw = serialize();
			t_data *data = deserialize(raw);

			std::cout << "\tstr1: " << data->s1 << std::endl;
			std::cout << "\tn:    " << data->n << std::endl;
			std::cout << "\tstr2: " << data->s2 << std::endl;

			delete static_cast<char*>(raw);
			delete data;
		}
	}
	
}