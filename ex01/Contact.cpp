/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:58:21 by gmaccha-          #+#    #+#             */
/*   Updated: 2025/06/19 13:37:11 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

using namespace	std;

void	Contact::setContact()
{
	do
	{
		cout << "First Name: ";
		getline(cin, firstname);
	} while (firstname.empty());
	do
	{
		cout << "Last Name: ";
		getline(cin, lastname);
	} while (lastname.empty());
	do
	{
		cout << "Nickname: ";
		getline(cin, nickname);
	} while (nickname.empty());
	do
	{
		cout << "Phone number: ";
		getline(cin, phonenumber);
	} while (phonenumber.empty());
	do
	{
		cout << "Darkest secret: ";
		getline(cin, darkestsecret);
	} while (darkestsecret.empty());
}

void	Contact::showSummary(int index) const
{
	cout	<< setw(10) << index << "|"
			<< setw(10) << truncar(firstname) << "|"
			<< setw(10) << truncar(lastname) << "|"
			<< setw(10) << truncar(nickname) << endl;
}

void	Contact::showDetail() const
{
	cout	<< "First Name: " << firstname << endl;
	cout	<< "Last Name: " << lastname << endl;
	cout	<< "Nickname: " << nickname << endl;
	cout	<< "Phone number: " << phonenumber << endl;
	cout	<< "Darkest secret: " << darkestsecret << endl;
}

string	Contact::truncar(string campo) const
{
	if (campo.length() > 10)
		return (campo.substr(0, 9) + ".");
	return (campo);
}
