/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:45:52 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/02 12:17:59 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	int				y;

	y = 0;
	x = 0;
	while (dest[y])
	{
		y++;
	}
	while (src[x] && x < nb)
	{
		dest[y] = src[x];
		y++;
		x++;
	}
	dest[y] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			s1[30] = {"Hello, "};
	char			s2[30] = {"Hello, "};
	char			s3[] = {"World"};
	unsigned int	nb = 3;

	printf("Concatenar \"%s\" e \"%s\" até %u\n", s1, s3, nb);
	printf("resulta na og: %s\n", strncat(s1, s3, nb));
	printf("resulta na ft: %s\n", ft_strncat(s2, s3, nb));
}
*/