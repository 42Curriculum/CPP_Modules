/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:45:02 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 15:45:02 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

size_t Span::longestSpan() const
{
	if (nb < 2)
		throw Span::NotEnoughValues();
	return large - small;
}

size_t Span::shortestSpan() const
{
	if (nb < 2)
		throw Span::NotEnoughValues();
	return second - small;
}

void Span::addNumber(int value)
{
	if (nb == max)
	{
		throw Span::FullException();
		return ;
	}
	if (value > large)
		large = value;
	else if (value > small && value < second)
		second = value;
	else if (value < small)
	{
		second = small;
		small = value;
	}
	if (nb == 0)
	{
		large = value;
		small = value;
		second = value;
	}
	content.push_back(value);
	nb++;
}

Span &Span::operator=(Span const &copy)
{
	max = copy.max;
	small = copy.small;
	large = copy.large;
	second = copy.second;
	content = copy.content;
	return *this;
}

const char* Span::FullException::what() const throw(){return "Span is full";}

const char* Span::NotEnoughValues::what() const throw(){return "Span must contain 2 or more values";}