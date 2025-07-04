/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:01:12 by gmaccha-          #+#    #+#             */
/*   Updated: 2025/07/04 12:58:08 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

using   namespace std;

int main()
{
	PhoneBook phonebook;
	string cmd;
	
	while (true)
	{
		cout << "Input a command (ADD, SEARCH, EXIT): ";
		if (!getline(cin, cmd)) {
			cout << RED << "\nEOF detected. Exiting program." << endl << RESET;
			break;
		}
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
		{
			cout << CYAN << "¡See you later!" << endl << RESET;
			break;
		}
		else
			cout << RED << "Unknown command." << endl << RESET;
	}
	return (0);
}