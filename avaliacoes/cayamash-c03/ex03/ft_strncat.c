/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:59:47 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/27 18:04:34 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char	s1[10] = "Eu uso ";
	char	s2[4] = "MAC";
	char	s3[10] = "Eu uso ";
	char	s4[4] = "MAC";

	strncat(s1, s2, 2);
	printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);
	
	ft_strncat(s3, s4, 2);
	printf("s3:%s\n", s3);
	printf("s4:%s\n", s4);
}
