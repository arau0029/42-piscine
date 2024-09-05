/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:48:09 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/02 09:51:17 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] && s2[x])
	{
		if (s1[x] == s2[x])
			x++;
		else
			return (s1[x] - s2[x]);
	}
	return (s1[x] - s2[x]);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[] = {"Hell"};
	char	s2[] = {"Hello, World"};

	printf("Comparar \"%s\" e \"%s\" resulta: %i\n", s1, s2, ft_strcmp(s1, s2));
	printf("Comparar \"%s\" e \"%s\" resulta: %i\n", s1, s2, strcmp(s1, s2));
}
*/