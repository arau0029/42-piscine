/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:20:19 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:36:14 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	x;

	x = 0;
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	if (size != 0)
	{
		while (src[x] && x < size - 1)
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (length);
}

/*
#include <stdio.h>

int	main (void)
{
	char				arr1[11] = {"this is 42"};
	char				arr2[11];
	unsigned int		size = 11;
	unsigned int		x = 0;

	ft_strlcpy(arr2, arr1, size);
	while (x < size)
	{
		printf("%c", arr2[x]);
		x++;
	}
	printf("\n%i", ft_strlcpy(arr2, arr1, size));
}
*/
