/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:33:16 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/02 16:16:59 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	y = size - 1;
	while (x < y)
	{
		temp = tab[x];
		tab[x] = tab[y];
		tab[y] = temp;
		x++;
		y--;
	}
}
#include <stdio.h>

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(arr, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	return (0);
}
