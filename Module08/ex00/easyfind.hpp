/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 14:38:04 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 14:38:04 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <map>
# include <algorithm>


template<typename T>
typename T::iterator easyfind(T &type, int value){return (std::find(type.begin(), type.end(), value));}

#endif