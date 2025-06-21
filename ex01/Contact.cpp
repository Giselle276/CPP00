/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:58:21 by gmaccha-          #+#    #+#             */
/*   Updated: 2025/06/21 20:00:51 by gmaccha-         ###   ########.fr       */
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
	cout	<< setw(10) << index << " |"
			<< setw(10) << truncar(firstname) << " |"
			<< setw(10) << truncar(lastname) << " |"
			<< setw(10) << truncar(nickname) << endl;
}

void	Contact::showDetail() const
{
	cout << "+----------------------+---------------------------+" << endl;
	cout << "| Field                | Value                     |" << endl;
	cout << "+----------------------+---------------------------+" << endl;
	cout << "| First Name:          | " << setw(25) << left << firstname << " |" << endl;
	cout << "| Last Name:           | " << setw(25) << left << lastname << " |" << endl;
	cout << "| Nickname:            | " << setw(25) << left << nickname << " |" << endl;
	cout << "| Phone number:        | " << setw(25) << left << phonenumber << " |" <<  endl;
	cout << "| Darkest secret:      | " << setw(25) << left << darkestsecret << " |" << endl;
	cout << "+----------------------+---------------------------+" << endl;
}

string	Contact::truncar(string campo) const
{
	if (campo.length() > 10)
		return (campo.substr(0, 9) + ".");
	return (campo);
}
