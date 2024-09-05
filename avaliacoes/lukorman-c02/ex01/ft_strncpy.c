/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:55:55 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/27 19:09:16 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

int     main(void)
{
        char    strd[100];
        char    *strs;

        strs = "This string will be copied. This part will NOT be copied.";
        printf("Original: %s\n", strs);
        ft_strncpy(strd, strs, 27);
        printf("Copy strD: %s\n", strd);
        return (0);
}
