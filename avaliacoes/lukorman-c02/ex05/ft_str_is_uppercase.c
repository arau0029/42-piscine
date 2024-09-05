/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:44:04 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/27 19:17:54 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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

        string1 = "THISSTRINGWILLRETURNTHENUMBERONE";
        string2 = "";
        string3 = "fgdfgdfgdT#$&!@";
        printf("test for str1, only uppercase, must return 1\n");
        printf("%d, %c", ft_str_is_uppercase(string1), '\n');
        printf("test for str2, empty, must return 1\n");
        printf("%d, %c", ft_str_is_uppercase(string2), '\n');
        printf("test for str3, numbers&charslow, must return 0\n");
        printf("%d, %c", ft_str_is_uppercase(string3), '\n');
}
