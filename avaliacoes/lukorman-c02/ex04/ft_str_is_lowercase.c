/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:04:26 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/27 19:15:55 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int     main(void)
{
        char    *string1;
        char    *string2;
        char    *string3;

        string1 = "thisstringwillreturnthenumberone";
        string2 = "Th1s string w1ll return the number 0";
        string3 = "fgdfgdfgdT#$&!@";
        printf("test for str1, only lowercase, must return 1\n");
        printf("%d, %c", ft_str_is_lowercase(string1), '\n');
        printf("test for str2, numbers&charsups, must return 0\n");
        printf("%d, %c", ft_str_is_lowercase(string2), '\n');
        printf("test for str3, numbers&charsups, must return 0\n");
        printf("%d, %c", ft_str_is_lowercase(string3), '\n');
}
