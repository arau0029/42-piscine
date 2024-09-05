/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agisabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:39:49 by agisabel          #+#    #+#             */
/*   Updated: 2024/09/02 15:48:28 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_uppercase(char c)
{
	if (c == '\0')
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
	{
	while (*str)
	{
		if (is_uppercase(*str) == 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int     main()
{
        char    *test1 = "BORA";
        char    *test2 = "BORA-BORA";
        char    *test3 = "";
        char    *test4 = "Agatha";

        printf("Test 1: %d\n", ft_str_is_uppercase(test1));
        printf("Test 2: %d\n", ft_str_is_uppercase(test2));
        printf("Test 3: %d\n", ft_str_is_uppercase(test3));
        printf("Test 4: %d\n", ft_str_is_uppercase(test4));

        return (0);
}
