/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:22:04 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/03 20:39:05 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	src_len = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (i < src_len && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	char			dst[20] = "Hello, ";
	char			*src = "world!";
	unsigned int	result = ft_strlcat(dst, src, 20);

	printf("String resultante: %s\n", dst);
	printf("Comprimento total: %u\n", result);

	return (0);
}
*/