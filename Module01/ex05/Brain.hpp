/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 06:46:45 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/09 20:38:17 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <sstream>
# include <string>

class Brain
{
private:
	int	memory;
public:
	Brain(int memory = 5);
	~Brain();

	int remember();
	std::string identify() const;
};

#endif