/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:09:07 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/14 15:28:49 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void additional_test(){

	std::cout << "\n=====ADDITIONAL TEST=====\n";
	MutantStack<int> m1;

	m1.push(1);
	m1.push(2);
	m1.push(3);

	for(MutantStack<int>::iterator it = m1.begin(); it != m1.end(); ++it ){
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	for(MutantStack<int>::const_iterator it = m1.cbegin(); it != m1.cend(); ++it ){
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	for(MutantStack<int>::reverse_iterator itr = m1.rbegin(); itr != m1.rend(); ++itr ){
		std::cout << *itr << " ";
	}
	std::cout << std::endl;

	for(MutantStack<int>::const_reverse_iterator itr = m1.crbegin(); itr != m1.crend(); ++itr ){
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
}

int main(){

	MutantStack<int> m1;
	MutantStack<int> m2;

	m1.push(10);
	MutantStack<int> m3(m1);
	m2 = m1;

	std::cout << m1.top() << " " << m2.top() << " " << m3.top() << "\n";

	std::cout<<"\n=====MutantStack Tests=====\n\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout<<"\n=====List Tests=====\n\n";
	std::list<int> mstack1;
	mstack1.push_back(5);
	mstack1.push_back(17);
	std::cout << "top: " << mstack1.back() << std::endl;
	mstack1.pop_back();
	std::cout << "size: " << mstack1.size() << std::endl;
	mstack1.push_back(3);
	mstack1.push_back(5);
	mstack1.push_back(737);

	mstack1.push_back(0);
	std::list<int>::iterator it1 = mstack1.begin();
	std::list<int>::iterator ite1 = mstack1.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::list<int> s1(mstack1);

	additional_test();

	return 0;
}

