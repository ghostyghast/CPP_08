/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:41:13 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/16 17:52:58 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

using std::list;
using std::vector;
using std::cout;

int	main(void)
{
	int			find[] = {-1, 100, 3};
	vector<int>	vect = {-1,1,2,3};
	list<int>	lst = {0,1,2,3};

	cout << "-------------------\n";
	for (int i = 0; i < 3; i++)
	{
		try
		{
			cout << "vector: " << easyfind(vect, find[i]) << '\n';
		}
		catch (std::exception &e)
		{
			cout << e.what() << '\n';
		}
		try
		{
			cout << "list: " << easyfind(lst, find[i]) << '\n';
		}
		catch (std::exception &e)
		{
			cout << e.what() << '\n';
		}
		cout << "-------------------\n";
	}
	// cout << "array: " << easyfind(array, find) << '\n';
}