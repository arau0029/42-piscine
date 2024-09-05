/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:53:47 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/03 20:13:37 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	if (x == n)
		return (0);
	while (s1[x] && s2[x] && x < n)
	{
		if (s1[x] == s2[x])
			x++;
		else
			return (s1[x] - s2[x]);
	}
	return (s1[x] - s2[x]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			s1[] = "";
	char			s2[] = "a";
	unsigned int	n = 0;

	printf("Comparar \"%s\" e \"%s\" até %u\n", s1, s2, n);
	printf("resulta na og: %i\n", strncmp(s1, s2, n));
	printf("resulta na ft: %i\n", ft_strncmp(s1, s2, n));
}
*/