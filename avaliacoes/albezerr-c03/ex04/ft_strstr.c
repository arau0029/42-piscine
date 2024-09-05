/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albezerr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:59:32 by albezerr          #+#    #+#             */
/*   Updated: 2024/09/03 18:25:27 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while (str[i] == to_find[i] && str[i] != '\0' && to_find[i] != '\0')
			{
				i++;
			}
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	char	*str = "Bom dia";
	char	*to_find = "d";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
