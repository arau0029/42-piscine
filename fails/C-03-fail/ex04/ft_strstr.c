/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:23:35 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/03 20:15:52 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	if (to_find[y] == '\0')
	{
		return (str);
	}
	while (str[x])
	{
		y = 0;
		while (str[x] == to_find[y] && to_find[y] && str[x])
		{
			y++;
			x++;
		}
		if (to_find[y] == '\0')
			return (str + x - y);
		x++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char			s1[30] = {"Hello, World"};
	char			s2[30] = {"again"};

	printf("Concatenar \"%s\" e \"%s\"\n", s1, s2);
	printf("resulta na ft: %s\n", ft_strstr(s1, s2));
}
*/