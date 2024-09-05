/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02-04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:06:19 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/18 15:23:54 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	if (x <= 0 || y <= 0)
		write(1, "Valor invalido!\n", 17);
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == 1))
				ft_putchar('A');
			else if ((i == 1 && j == y) || (i == x && j == y))
				ft_putchar('C');
			else if ((j != 1 && j != y) && (i != 1 && i != x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return ;
}
