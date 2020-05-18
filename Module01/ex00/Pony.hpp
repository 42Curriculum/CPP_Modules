/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:46:35 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/08 18:07:12 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Pony
{
	private :
		std::string const &name;
		int candymountain;
		int energy;
	public :
		Pony(std::string name);
		~Pony();

		void status();
		int walk();
		int trot();
		int run();
};