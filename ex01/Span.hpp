/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:54:53 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/16 20:45:08 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iterator>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &copy);

		void	addNumber(int i);
		template <typename T> void addRange(typename T::iterator first, typename T::iterator last)
		{
			while (first != last)
			{
				if (this->_numbers.size() == this->_n)
					throw MaximumIntReachedException();
				this->_numbers.push_back(*first);
				first++;
			}
		}

		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		class MaximumIntReachedException : public std::exception
		{
			const char	*what() const throw()
			{
				return ("the maximum number of allowed integers has been reached");
			}
		};

	private:
		unsigned int		_n;
		std::vector<int>	_numbers;
};

#endif