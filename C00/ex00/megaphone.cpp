/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:59:43 by aborges           #+#    #+#             */
/*   Updated: 2025/06/03 13:47:06 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i;
	int j;

	if (argc < 2)
	{
		std ::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std ::endl;
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
		        std::cout << (char)std::toupper(argv[i][j]);
            else
		        std::cout << argv[i][j];
            j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}