/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:34:09 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/09/04 18:00:03 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32) && (str[i] <= 126)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int     main()
{
        char *test1 = "L4\nWes";

        printf("Test 1: %s\n", ft_str_is_printable(test1) ? "Passed" : "Fail");
}
