/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:26:35 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/02 10:44:49 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (dest[y])
	{
		y++;
	}
	while (src[x])
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

	printf("Concatenar \"%s\" e \"%s\"\n", s1, s3);
	printf("resulta na og: %s\n", strcat(s1, s3));
	printf("resulta na ft: %s\n", ft_strcat(s2, s3));
}
*/