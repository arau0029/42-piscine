/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:54:12 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/27 18:19:26 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (size <= dlen)
		return (size + slen);
	while ((dlen + i) < (size - 1) && (i < slen))
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

//dlen + i => começa a sobrepor no caracter \0
//size - 1 => ultimo índice válido no destino deixando 1 caracter para \0
int	main()
{
	int	i;
	char	s1[8] = "Eu uso ";
	char	s2[8] = "Windows";

	i = ft_strlcat(s1, s2, 7);
	printf("%i\n", i);
	printf("%s\n", s1);
	printf("%s\n", s2);
	return(0);
}
