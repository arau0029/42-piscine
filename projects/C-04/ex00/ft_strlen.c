/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:20:45 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/03 10:29:24 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Número de caracteres: %i", ft_strlen(argv[1]));
	}
	return (0);
}
*/
