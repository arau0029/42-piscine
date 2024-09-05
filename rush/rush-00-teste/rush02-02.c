/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02-02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:06:19 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/17 12:49:18 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i && j) == 0 || (i == (x - 1) && j == 0))
			{
				ft_putchar('A');
			}
			else if ((i == 0 && j == (y - 1)) || (i == (x - 1) && j == (y - 1)))
			{
				ft_putchar('C');
			}
			else if ((j != 0 || j != (y - 1)) && (i != 0 || i != (x - 1)))
			{
				ft_putchar(' ');
			}
			i++;
			ft_putchar('B');
		}
		ft_putchar('\n');
		j++;
	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}
