/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:02:32 by acmachad          #+#    #+#             */
/*   Updated: 2024/09/04 17:25:38 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i ;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "World!";

    ft_strcat(dest, src);

    printf("%s\n", dest);

    return 0;
}
