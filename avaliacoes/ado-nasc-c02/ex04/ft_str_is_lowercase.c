/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:17:53 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/09/04 17:56:12 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97) && (str[i] <= 122)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	char test1[] = "123456";
	char test2[] = "word";
	char test3[] = "Test!";

	printf("Test 1: %s\n", ft_str_is_lowercase(test1) ? "Passed" : "Fail");
	printf("Test 2: %s\n", ft_str_is_lowercase(test2) ? "Passed" : "Fail");
	printf("Test 3: %s\n", ft_str_is_lowercase(test3) ? "Passed" : "Fail");
}
