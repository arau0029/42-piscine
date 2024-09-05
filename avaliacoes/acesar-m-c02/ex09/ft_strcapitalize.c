/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:57:25 by acesar-m          #+#    #+#             */
/*   Updated: 2024/08/29 18:26:13 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == str[0] || str[i - 1] == ' '
			|| str[i - 1] == '+' || str[i - 1] == '-')
		{
			if (str[i] > 96 && str[i] < 123)
			{
			str[i] -= 32;
			}
		}
		else if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char transform[] = "oi, tudo bem? 42palAVras quarenta#e*duas; cinquenta+e+um";

	printf("%s", ft_strcapitalize(transform));

	return (0);
}

