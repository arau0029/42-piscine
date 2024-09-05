/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:07:50 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:00:56 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	char	*non_print;
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (str[x])
	{
		if (str[x] < 20 || str[x] > 126)
		{
			non_print[y] = '\\';
			y++;
			print_hex();
			
		}
		non_print[y] = str[x];
		x++;
		y++;
	}
	write(1, non_print, y - 1);
}



int	main(void)
{
	char	*test = "Oi \nvoce esta bem?";

	write(1, test, 1);
	ft_putstr_non_printable(test);
}
