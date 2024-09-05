/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleal-go <lleal-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 21:01:28 by lleal-go          #+#    #+#             */
/*   Updated: 2024/08/29 22:04:46 by lleal-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
        char    nome[] = {"laislealgomes brito"};
        char    copia[10];

        printf("%s\n", nome);
        strcpy(copia, nome);
        printf("%s\n", copia);

		printf("\n");

		char    nome2[] = {"laislealgomes brito"};
        char    copia2[10];

        printf("%s\n", nome2);
        ft_strcpy(copia2, nome2);
        printf("%s\n", copia2);
}
*/
