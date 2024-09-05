/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:16:49 by ytavares          #+#    #+#             */
/*   Updated: 2024/08/27 16:43:25 by ytavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>
#include	<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return(0);
}*/
