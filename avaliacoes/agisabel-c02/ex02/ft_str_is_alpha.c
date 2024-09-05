/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agisabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:18:39 by agisabel          #+#    #+#             */
/*   Updated: 2024/09/02 15:39:20 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	non_alpha(char c)
{
	if (c == '\0')
	{
		return (1);
	}
	if (c < 65 || (c > 90 && c < 97) || c > 122)
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (non_alpha(*str) == 0)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	*test1 = "13";
	char	*test2 = "Agora vai aaa";
	char	*test3 = "";
	char	*test4 = "Agathaisabel";

	printf("Test 1: %d\n", ft_str_is_alpha(test1));
	printf("Test 2: %d\n", ft_str_is_alpha(test2));
	printf("Test 3: %d\n", ft_str_is_alpha(test3));
        printf("Test 4: %d\n", ft_str_is_alpha(test4));

	return (0);
}
