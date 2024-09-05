/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:14:30 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/27 19:14:44 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 90)
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

        string1 = "1234567890235742464";
        string2 = "Th1s string w1ll return the number 0";
        string3 = "****bvfghsfgbafsvdfba#$*###$Â¨";
        printf("test for str1, only numbers, must return 1\n");
        printf("%d, %c", ft_str_is_numeric(string1), '\n');
        printf("test for str2, numbers&chars, must return 0\n");
        printf("%d, %c", ft_str_is_numeric(string2), '\n');
        printf("test for str3, letters&special, must return 0\n");
        printf("%d, %c", ft_str_is_numeric(string3), '\n');
}
