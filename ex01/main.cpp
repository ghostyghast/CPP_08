/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringles <pringles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 19:12:22 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/29 09:18:38 by pringles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
using std::cout;

template <typename T> void add_values(int const* array, size_t size, T &container)
{
	for (size_t i = 0; i < size; i++)
		container.push_back(array[i]);
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vect)
{
	for (std::vector<int>::const_iterator it = vect.begin(), start = vect.begin(), end = vect.end(); it != end; it++)
	{
		if (it != start)
			os << ", ";
		os << *it;
	}
    return os;
}

int main()
{
	cout << "Span(5) values: 3, 5, 6, 9, 11, 17\n"; 
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	cout << "Trying to add another value:\n";
	try
	{
		sp.addNumber(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';	
	}

	cout << "--------------------\n"; 
	Span	span(10);
	
	std::vector<int>		list;
	int					values[4] = {-1, 10, 11212, 4};
	add_values(values, 4, list);
	cout << "Span(10) values: " << list << '\n';
	span.addRange<std::vector<int> >(list.begin(), list.end());
	std::cout << "shortest span: " << span.shortestSpan() << std::endl; 
	std::cout << "longest span: " << span.longestSpan() << std::endl;
	return (0);
}