/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:19:58 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/20 19:05:09 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}

int main()
{
	int a, b;
	int div, mod;

	printf("Escreve dois números inteiros!\n");
	printf("Primeiro:");
	scanf("%d", &a);
	printf("Segundo:");
	scanf("%d", &b);
	ft_div_mod(a, b, &div, &mod);
	printf("Resultado: %d\n", div);
	printf("Resto: %d\n", mod);
	return 0;
}

