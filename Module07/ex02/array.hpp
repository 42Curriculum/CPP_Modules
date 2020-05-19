/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 18:33:06 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/18 18:33:06 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
# include <cctype>

template<typename T>
class Array
{
private:
	size_t length;
	T *elts;
public:
	Array();
	Array(size_t n);
	Array(Array<T> const &other);
	virtual ~Array();

	class OutOfBoundsException: public std::exception {
		virtual const char* what() const throw();
	};

	Array &operator=(Array const &other);
	T &operator[](size_t index);
	T const &operator[](size_t index) const;

	size_t size(void) const;
};
# include "array.ipp"

#endif
