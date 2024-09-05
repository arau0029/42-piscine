/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:28:01 by ytavares          #+#    #+#             */
/*   Updated: 2024/08/27 18:55:14 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_putstr(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		write(1, &str[contador], 1);
		contador++;
	}
}

int	main(void)
{
	char	str[8];

	str[0] = 'y';
	str[1] = 's';
	str[2] = 'a';
	str[3] = 'b';
	str[4] = 'e';
	str[5] = 'l';
	str[6] = 'a';
	str[7] = '\0';
	ft_putstr(str);
}
