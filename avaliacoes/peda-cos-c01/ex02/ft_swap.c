/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:11:20 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/02 16:02:39 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
int	main(void)
{
	int x = 42;
	int y = 82;

	printf("Before swap: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);

	return 0;
}
