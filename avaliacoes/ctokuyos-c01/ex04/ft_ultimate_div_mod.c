/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctokuyos <ctokuyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:49:26 by ctokuyos          #+#    #+#             */
/*   Updated: 2024/09/02 17:03:40 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf ("%d, %d", x, y);
}
