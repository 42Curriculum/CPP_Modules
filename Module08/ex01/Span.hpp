/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:01:55 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 15:01:55 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>

class Span
{
private:
	Span();

	size_t max;

	int large;
	int second;
	int small;	
	size_t nb;
	std::vector<int> content;
public:
	Span(size_t amount) : max(amount), large(0), second(0), small(0), nb(0) {}

	Span(Span const &copy) : max(copy.max), large(copy.large), second(copy.second), small(copy.small), nb(copy.nb), content(copy.content) {}

	virtual ~Span(){}

	class FullException: public std::exception {virtual const char* what() const throw();};
	
	class NotEnoughValues: public std::exception {virtual const char* what() const throw();};

	size_t shortestSpan() const;
	
	size_t longestSpan() const;
	
	Span &operator=(Span const &copy);

	void addNumber(int value);

};


#endif