/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pringles <pringles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:41:13 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/28 11:52:37 by pringles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

using std::list;
using std::vector;
using std::cout;

template <typename T> void add_values(int* array, size_t size, T &container)
{
	for (size_t i = 0; i < size; i++)
		container.push_back(array[i]);
}

int	main(void)
{
	int			find[] = {-1, 100, 3};
	int			values[] = {-1, 1, 2, 3};
	vector<int>	vect = {-1,1,2,3};
	list<int>	lst = {0,1,2,3};
	add_values(values, 4, vect);
	add_values(values, 4, lst);

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