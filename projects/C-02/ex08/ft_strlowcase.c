/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:52:30 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:36:41 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (64 < str[x] && str[x] < 91)
			str[x] += 32;
		x++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_strlowcase(argv[1]);
	}
	printf("%s", ft_strlowcase(argv[1]));
	return (0);
}
*/
