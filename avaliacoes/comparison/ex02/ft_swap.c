/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:17:38 by ytavares          #+#    #+#             */
/*   Updated: 2024/08/27 16:36:45 by ytavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>
#include	<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	nula;

	nula = *a;
	*a = *b;
	*b = nula;
}
/*
int	main(void)
{
	int number = 10;
	int number2 = 2;
	int a = &number;
	int b = &number2;
	ft_swap(a, b);
        printf("%d\n", a);
	printf("%d\n", b);
}*/
