/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:43:14 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/09/04 17:57:42 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65) && (str[i] <= 90)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	char *test1 = "LOWEST";
	char *test2 = "header";
	char *test3 = "Test!";

	printf("Test 1: %s\n", ft_str_is_uppercase(test1) ? "Passed" : "Fail");
	printf("Test 2: %s\n", ft_str_is_uppercase(test2) ? "Passed" : "Fail");
	printf("Test 3: %s\n", ft_str_is_uppercase(test3) ? "Passed" : "Fail");
}
