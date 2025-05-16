/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:40:27 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/16 19:24:38 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>

class ValueNotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return ("value not found in container");
	}
};

template <typename T> int	&easyfind(T container, int find);

#include "easyfind.tpp"

#endif