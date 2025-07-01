/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:16:21 by gmaccha-          #+#    #+#             */
/*   Updated: 2025/07/01 12:17:11 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			str = argv[i];
			j = 0;
			while (str[j])
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			if (i < argc - 1)
    			std::cout << ' ';
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}