/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:27:02 by gmaccha-          #+#    #+#             */
/*   Updated: 2025/07/01 13:36:56 by gmaccha-         ###   ########.fr       */
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
	cout << GREEN << "Saved contact." << endl << RESET;
}

void	PhoneBook::searchContact() const
{
	int		i;
	string	input;
	int		index;
	
	if (count == 0)
	{
		cout << "There are no contacts saved." << endl;
		return ;
	}
	cout << YELLOW << "+----------------------+---------------------------+" << endl;
	cout	<< setw(10) << " Index" << " |"
			<< setw(10) << " First Name" << " |"
			<< setw(10) << " Last Name" << " |"
			<< setw(10) << " Nickname" << endl;
	cout << "+----------------------+---------------------------+" << endl << RESET;
	for (i = 0; i < count; i++)
	{
		contacts[i].showSummary(i);
	}
	while (true)
	{
		cout << "Input the contact index: ";
		getline(cin, input);
		if (input.length() == 1 && isdigit(input[0]))
		{
			index = input[0] - '0';
			if (index >= 0 && index < count)
			{
				contacts[index].showDetail();
				break;
			}
		}
	cout << "Invalid index. Please try again." << endl;
	}
}