/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:06:19 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/17 11:16:01 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int z)
{
	int	middle_x;
	int	middle_y;

	middle_x = 0;
	middle_y = 0;
	if (y >= 1)
	{
		ft_putchar('A');
		if (x >= 2)
		{
			while (middle_x < (x - 2))
			{
				ft_putchar('B');
				middle_x++;
			}
			ft_putchar('A');
		}
	}
	while (middle_y < (y - 2))
	{ 
		middle_x = 0;
		ft_putchar('B');
		if (x >= 2)
		{
			while (middle_x < (x - 2))
			{
				ft_putchar(' ');
				middle_x++;
			}
			ft_putchar('B');
		}
		
	}
	if (y >= 2)
	{
		middle_x = 0;
		ft_putchar('C');
		if (x >= 2)
		{
			while (middle_x < (x - 2))
			{
				ft_putchar('B');
				middle_x++;
			}
			ft_putchar('C');
		}
	}
}
