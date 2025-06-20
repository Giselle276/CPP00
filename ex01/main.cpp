/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:01:12 by gmaccha-          #+#    #+#             */
/*   Updated: 2025/06/20 10:11:19 by gmaccha-         ###   ########.fr       */
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
		getline(cin, cmd);
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
		{
			cout << "!See you later!" << endl;
			break;
		}
		else
			cout << "Unknown command." << endl;
	}
	return (0);
}