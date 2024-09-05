/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agisabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:20:41 by agisabel          #+#    #+#             */
/*   Updated: 2024/09/02 15:46:20 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_lowercase(char c)
{
	if (c == '\0')
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (is_lowercase(*str) == 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	*test1 = "agatha";
	char	*test2 = "vamos conseguir passar nessapourra";
	char	*test3 = "";
	char	*test4 = "Agathinha";

	printf("Test 1: %d\n", ft_str_is_lowercase(test1));
	printf("Test 2: %d\n", ft_str_is_lowercase(test2));
	printf("Test 3: %d\n", ft_str_is_lowercase(test3));
	printf("Test 4: %d\n", ft_str_is_lowercase(test4));
}
