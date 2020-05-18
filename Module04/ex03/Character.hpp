/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 01:39:16 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/12 02:17:46 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character: public ICharacter
{
private:

	std::string name;
	
	int equipped;
	
	AMateria *inventory[4];
	Character();
public:
	Character(std::string const &name);
	
	Character(Character const &copy);
	
	virtual ~Character();

	Character &operator=(Character const &copy);

	std::string const &getName() const;

	void equip(AMateria *m);
	
	void unequip(int idx);
	
	void use(int idx, ICharacter &target);
};

#endif