/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:01:19 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/09/04 18:01:51 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int     main()
{
        char test1[] = "DRFEST";
        char test2[] = "Test!";

        printf("Test 1: %s\n", ft_strlowcase(test1));
        printf("Test 2: %s\n", ft_strlowcase(test2));
}
