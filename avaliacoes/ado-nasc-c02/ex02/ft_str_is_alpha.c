/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:06:25 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/09/04 17:54:37 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65) && (str[i] <= 90)))
		{
			if (!((str[i] >= 97) && (str[i] <= 122)))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
int	main()
{
	char test1[] = "";
	char test2[] = "Word!";
	char test3[] = "Test";

	printf("Teste 1: %s\n", ft_str_is_alpha(test1) ? "Passou" : "Falhou");
	printf("Teste 2: %s\n", ft_str_is_alpha(test2) ? "Passou" : "Falhou");
	printf("Teste 3: %s\n", ft_str_is_alpha(test3) ? "Passou" : "Falhou");
}
