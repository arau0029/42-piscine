/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:15:03 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/20 19:07:51 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	if (b != 0)
	{
		temp_a = *a / *b;
		temp_b = *a % *b;
		*a = temp_a;
		*b = temp_b;
	}
	else
	{
		*a = 0;
		*b = 0;
	}
}

int main()
{
	int a, b;

	printf("Escreve dois números inteiros!\n");
	printf("Primeiro:");
	scanf("%d", &a);
	printf("Segundo:");
	scanf("%d", &b);
	ft_ultimate_div_mod(&a, &b);
	printf("Resultado: %d\n", a);
	printf("Resto: %d\n", b);
	return 0;
}

