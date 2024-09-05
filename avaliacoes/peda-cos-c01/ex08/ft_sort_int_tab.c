/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:16:37 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/02 16:21:58 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	while (x < size - 1)
	{
		y = 0;
		while (y < size - x - 1)
		{
			if (tab[y] > tab[y + 1])
			{
				temp = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = temp;
			}
			y++;
		}
		x++;
	}
}
#include <stdio.h>

int	main(void)
{
	int arr[] = {5, 3, 2, 4, 1};
	int size = 5;
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(arr, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
