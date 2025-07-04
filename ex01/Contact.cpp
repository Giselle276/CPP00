/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:58:21 by gmaccha-          #+#    #+#             */
/*   Updated: 2025/07/04 12:56:52 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace	std;

bool isAlphaString(const std::string& str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!isalpha(str[i]) && str[i] != ' ' && str[i] != '-')
			return false;
	}
	return true;
}

void	Contact::setContact()
{
	do
	{
		cout << BLUE << "First Name: " << RESET;
		if (!getline(cin, firstname)) {
			cout << RED << "\nEOF detected. Exiting input." << RESET << endl;
			exit(1);
		}
		if (firstname.empty())
			cout << RED << "First Name cannot be empty." << endl << RESET;
		else if (!isAlphaString(firstname))
		{
			cout << RED << "First Name must contain only letters, spaces or hyphens." << endl << RESET;
			firstname.clear();
		}
	} while (firstname.empty());
	do
	{
		cout << BLUE << "Last Name: " << RESET;
		if (!getline(cin, lastname)) {
			cout << RED << "\nEOF detected. Exiting input." << RESET << endl;
			exit(1);
		}
		if (lastname.empty())
			cout << RED << "Last Name cannot be empty." << endl << RESET;
		else if (!isAlphaString(lastname))
		{
			cout << RED << "Last Name must contain only letters, spaces or hyphens." << endl << RESET;
			lastname.clear();
		}
	} while (lastname.empty());
	do
	{
		cout << BLUE << "Nickname: " << RESET;
		if (!getline(cin, nickname)) {
			cout << RED << "\nEOF detected. Exiting input." << RESET << endl;
			exit(1);
		}
		if (nickname.empty())
			cout << RED << "Nickname cannot be empty." << endl << RESET;
	} while (nickname.empty());
	do
	{
		cout << BLUE << "Phone number: " << RESET;
		if (!getline(cin, phonenumber)) {
			cout << RED << "\nEOF detected. Exiting input." << RESET << endl;
			exit(1);
		}
		if (phonenumber.empty())
		{
			cout << RED << "Phone number cannot be empty." << endl << RESET;
			continue;
		}
		bool isValid = true;
		for (size_t i = 0; i < phonenumber.length(); ++i)
		{
			if (!isdigit(phonenumber[i]))
			{
				isValid = false;
				break;
			}
		}
		if (!isValid)
		{
			cout << RED << "Phone number must contain only digits." << endl << RESET;
			phonenumber.clear();
		}
	} while (phonenumber.empty());
	do
	{
		cout << BLUE << "Darkest secret: " << RESET;
		if (!getline(cin, darkestsecret)) {
			cout << RED << "\nEOF detected. Exiting input." << RESET << endl;
			exit(1);
		}
		if (darkestsecret.empty())
			cout << RED << "Darkest secret cannot be empty." << endl << RESET;
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
	cout << GREEN << "+----------------------+---------------------------+" << endl << RESET;
	cout << GREEN << "| Field                | Value                     |" << endl << RESET;
	cout << GREEN << "+----------------------+---------------------------+" << endl << RESET;
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
