/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 21:50:26 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/14 21:50:26 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <vector>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:

	std::vector<T>	vec;
public:
	typedef typename std::vector<T>::iterator iterator;
	
	typedef typename std::vector<T>::reverse_iterator reverse_iterator;
	
	MutantStack() {}

	MutantStack(MutantStack<T> const &copy) {vec = copy.vec;}

	~MutantStack() {}

	MutantStack &operator=(MutantStack<T> const &copy) {vec = copy.vec; return *this;}

	iterator begin(){return vec.begin();}
	
	reverse_iterator rbegin(){return vec.rbegin();}
	
	iterator end(){return (vec.end());}

	reverse_iterator rend(){return (vec.rend());}

	void push(T arg){vec.push_back(arg);}

	void pop() {vec.pop_back();}

	size_t size(){return vec.size();}

	T top() {return *(vec.end()-1);}
};

#endif