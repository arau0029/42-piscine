/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:48:38 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/21 16:50:41 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*
int	main(void)
{
	int	x = 2;
	int	y = 6;

	printf("Before: x = %i, y = %i", x, y);
	ft_swap(&x, &y);
	printf("\nAfter: x = %i, y = %i", x, y);
}
*/
