/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:41:30 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/27 19:13:18 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
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

        string1 = "Thisstringwillreturnthenumberone";
        string2 = "Th1s string w1ll return the number 0";
        string3 = "";
        printf("test for str1, only text, must return 1\n");
        printf("%d, %c", ft_str_is_alpha(string1), '\n');
        printf("test for str2, numbers&chars, must return 0\n");
        printf("%d, %c", ft_str_is_alpha(string2), '\n');
        printf("test for str3, only numbers, must return 0\n");
        printf("%d, %c", ft_str_is_alpha(string3), '\n');
}
