/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:40:35 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/16 19:24:45 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include <algorithm>
#include <iostream>

template <typename T> int	&easyfind(T container, int find)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), find);
	if (it == container.end())
		throw ValueNotFoundException();
	return (*it);
}

#endif