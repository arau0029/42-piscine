/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedvieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:30:22 by pedvieir          #+#    #+#             */
/*   Updated: 2024/08/27 17:27:03 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rest;
	int	div;

	rest = *a % *b;
	div = *a / *b;
	*a = div;
	*b = rest;
}

#include <stdio.h>

int	main(void)
{
	int	numb1;
	int	numb2;

	numb1 = 120;
	numb2 = 50;
	ft_ultimate_div_mod(&numb1, &numb2);
	printf("pa= %d ", numb1);
	printf("pb= %d ", numb2);
}

