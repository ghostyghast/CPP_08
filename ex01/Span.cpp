/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:54:32 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/16 20:23:01 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <algorithm>

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::~Span()
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span	&Span::operator=(const Span &copy)
{
	this->_numbers.clear();
	for (size_t i = 0, size = this->_numbers.size(); i < size; i++)
		this->_numbers[i] = copy._numbers[i];
	return (*this);
}

void	Span::addNumber(int i)
{
	if (this->_numbers.size() == this->_n)
		throw MaximumIntReachedException();
	this->_numbers.push_back(i);
}

template <typename T>
void Span::addRange(typename T::iterator first, typename T::iterator last)
{
	while (first != last)
	{
		if (this->_numbers.size() == this->_n)
			throw MaximumIntReachedException();
		this->_numbers.pop_back(*first);
		first++;
	}
}

unsigned int	Span::longestSpan()
{
	std::vector<int>::iterator	start = this->_numbers.begin();
	std::vector<int>::iterator	end = this->_numbers.end();

	std::sort(start, end);
	end--;
	return (*end - *start);
}

unsigned int	Span::shortestSpan()
{
	std::vector<int>::iterator	start = this->_numbers.begin();
	std::vector<int>::iterator	it = start;
	std::vector<int>::iterator	end = this->_numbers.end();
	unsigned int					span = longestSpan();
	
	while (start != end)
	{
		if (it + 1 != end && static_cast<unsigned int>(*(it + 1) - (*it)) < span)
			span = *(it + 1) - (*it);
		it++;
	}
	return (0);
}