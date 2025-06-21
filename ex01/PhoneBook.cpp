/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:27:02 by gmaccha-          #+#    #+#             */
/*   Updated: 2025/06/21 19:25:43 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

PhoneBook::PhoneBook() : count(0), nextIndex(0)
{
}

void	PhoneBook::addContact()
{
	Contact	newcontact;
	newcontact.setContact();
	contacts[nextIndex] = newcontact;
	nextIndex = (nextIndex + 1) % 8;
	if (count < 8)
		count++;
	cout << "Saved contact." << endl;
}

void	PhoneBook::searchContact() const
{
	int		i;
	string	input;
	int		index;
	
	index = input[0] - '0';
	
	if (count == 0)
	{
		cout << "There are no contacts saved." << endl;
		return ;
	}
	cout	<< setw(10) << "Index" << "|"
			<< setw(10) << "First Name" << "|"
			<< setw(10) << "Last Name" << "|"
			<< setw(10) << "Nickname" << endl;
	for (i = 0; i < count; i++)
	{
		contacts[i].showSummary(i);
	}
	cout << "Input the contact index: ";
	getline(cin, input);
	if (input.length() != 1 || !isdigit(input[0]))
	{
		cout << "Invalid index." << endl;
		return ;
	}
	if (index < 0 || index >= count)
	{
		cout << "Index out of range." << endl;
		return ;
	}
	contacts[index].showDetail();
}
