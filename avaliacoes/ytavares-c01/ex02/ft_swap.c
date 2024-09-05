/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:32:58 by ytavares          #+#    #+#             */
/*   Updated: 2024/08/27 18:46:27 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_swap(int *a, int *b);
{
	*a = *b;
	*b = number;
}

int	main(void)

{
	int number1 = 2;
	int number2 = 4;
	int *a;
	int *b;

	a = &number1;
	b = &number2;
	a = b;
	b = a;

	
}
