/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:03:56 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/27 19:20:21 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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

        string1 = "THISstr1ngW1LLRETURNTHENUMBER*** ONE ***";
        string2 = "";
        string3 = "hkfjh\n\n\0fjgld";
        printf("test for str1, only printable, must return 1\n");
        printf("%d, %c", ft_str_is_printable(string1), '\n');
        printf("test for str2, empty, must return 1\n");
        printf("%d, %c", ft_str_is_printable(string2), '\n');
        printf("test for str3, controlchars, must return 0\n");
        printf("%d, %c", ft_str_is_printable(string3), '\n');
}
