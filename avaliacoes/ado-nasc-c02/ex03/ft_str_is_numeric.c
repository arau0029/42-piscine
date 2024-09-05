/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:22:50 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/09/04 17:55:28 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 48) && (str[i] <= 57)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int     main()
{
        char test1[] = "123456";
        char test2[] = "Laser025";
        char test3[] = "Test!";

        printf("Teste 1: %s\n", ft_str_is_numeric(test1) ? "Passou" : "Falhou");
        printf("Teste 2: %s\n", ft_str_is_numeric(test2) ? "Passou" : "Falhou");
        printf("Teste 3: %s\n", ft_str_is_numeric(test3) ? "Passou" : "Falhou");
}
