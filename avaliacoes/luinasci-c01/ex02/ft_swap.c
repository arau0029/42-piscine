/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:05:31 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/20 19:03:52 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 42;
	int b = 24;

	printf("a Antes: %d\n", a);
	printf("b Antes: %d\n", b);
	ft_swap(&a, &b);
	printf("a Depois: %d\n", a);
	printf("b Depois: %d\n", b);
}
