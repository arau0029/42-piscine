/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:17:35 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/28 16:14:02 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	// int	x;

	// x = 0;
	// while (str[x])
	// {
	// 	if (64 < str[x] && str[x] < 91)
	// 		str[x] += 32;
	// 	if (96 < str[x] && str[x] < 123)
	// 	{
	// 		if ((x > 0 && str[x - 1] == ' ') || x == 0)
	// 			str[x] -= 32;
	// 		if (x > 0 && (str[x - 1] == '-' || str[x - 1] == '+'))
	// 			str[x] -= 32;
	// 	}
	// 	x++;
	// }

	int	x;
	int y;

	x = 0;
	while (str[x])
	{
		if (64 < str[x] && str[x] < 91)
			str[x] += 32;
		x++;
	}
	x = 0;
	while (str[x])
	{
		if (96 < str[x] && str[x] < 123)
		{
			y = x;
			while (96 < str[y] && str[y] < 123)
			{
				y++;
			}
			if (!(47 < str[x - 1] && str[x - 1] < 58))
			str[x] -= 32;
			x = y;
		}
		x++;
	}
	return (str);
}


#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_strcapitalize(argv[1]);
	printf("%s", ft_strcapitalize(argv[1]));
}
