/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:40:04 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/02 16:09:23 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
int	main(void)
{
	int a = 10;
	int b = 3;

	printf("Before: a = %d, b = %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("After: a = %d, b = %d\n", a, b);

	return 0;
}
