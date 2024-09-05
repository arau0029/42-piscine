/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agisabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:03:04 by agisabel          #+#    #+#             */
/*   Updated: 2024/09/02 15:43:27 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_num(char c)
{
	if (c == '\0')
	{
		return (1);
	}
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (is_num(*str) == 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int     main(void)
{
        char    *test1 = "13";
        char    *test2 = "O senhor dos aneis";
        char    *test3 = "";
        char    *test4 = "Thewalkingdead";
	char	*test5 = "123000";

        printf("Test 1: %d\n", ft_str_is_numeric(test1));
        printf("Test 2: %d\n", ft_str_is_numeric(test2));
        printf("Test 3: %d\n", ft_str_is_numeric(test3));
        printf("Test 4: %d\n", ft_str_is_numeric(test4));
	printf("Test 5: %d\n", ft_str_is_numeric(test5));

        return (0);
}
