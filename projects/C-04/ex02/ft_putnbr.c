/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:40:56 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/03 12:28:15 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	long	t_long;
	char	c_nb[20];
	int		i;

	t_long = nb;
	i = 0;
	if (t_long < 0)
	{
		c_nb[i] = '-';
		t_long = t_long * -1;
		write(1, &c_nb[i], 1);
	}
	while (t_long >= 10)
	{
		c_nb[i] = (t_long % 10) + '0';
		t_long = t_long / 10;
		i++;
	}
	if (t_long < 10)
		c_nb[i] = t_long + '0';
	while (i >= 0)
	{
		write(1, &c_nb[i], 1);
		i--;
	}
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
}
*/
