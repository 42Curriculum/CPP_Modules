/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 18:26:04 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/08 02:50:20 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
class contact
{
private:
	std::string info[11];
	static std::string fields[11];
public:
	contact();
	~contact();

	contact fill();
	
	void display_first(int index);
	void display_all();
};

#endif