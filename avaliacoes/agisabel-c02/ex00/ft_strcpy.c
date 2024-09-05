/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agisabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:54:44 by agisabel          #+#    #+#             */
/*   Updated: 2024/09/02 15:19:29 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *scr)
{
	int	i;

	i = 0;
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char scr[] = "Adoro zumbis!";
	char dest[20];

	dest[0] = '\0';

	printf("Before\n:%s\n", dest);
	ft_strcpy(dest, scr);
	printf("After\n:%s\n", dest);

	return 0;
}
