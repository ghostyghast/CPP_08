/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:13:37 by amaligno          #+#    #+#             */
/*   Updated: 2025/06/09 19:18:24 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::stack;

int main()
{
	MutantStack<int>	mstack;
	vector<int>			numbers;

	if (mstack.empty())
		cout << "stack is empty\n";

	for (int i = 100; i; i--)
		numbers.push_back(i);

	mstack.push_range<vector<int> >(numbers.begin(), numbers.end());

	cout << "mstack.top()  :" <<mstack.top() << '\n';
	cout << "mstack.size() :" <<mstack.size() << '\n';

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();

	cout << "mstack values: " << '\n';
	while (it + 1 != end)
	{
		cout << *it << ", ";
		++it;
	}
	cout << *it << '\n';
	
	mstack.pop();

	stack<int> s(mstack);
	cout << "s.top()  :" << s.top() << '\n';
	cout << "s.size() :" <<s.size() << '\n';

	if (s == mstack)
		cout << "Stacks are the same :)\n";
	
	return 0;
}