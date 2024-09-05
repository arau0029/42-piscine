/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:55:29 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/02 16:07:44 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int	main(void)
{
	int a = 84;
	int b = 42;
	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d / %d = %d\n", a, b, div);
	printf("Modulo: %d % %d = %d\n", a, b, mod);


	return 0;
}
