/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:31:09 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/27 09:55:43 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*
int	main(void)
{
	int arr2[] = {1, 2, 3, 4, 5};

	printf("Previous array:");
	for (int i = 0; i < 5; i++)
	{
		printf("%i, ", arr2[i]);
	}
	ft_rev_int_tab(arr2, 5);
        printf("\nReversed array:");
        for (int i = 0; i < 5; i++)
        {
                printf("%i, ", arr2[i]);
        }
}
*/
