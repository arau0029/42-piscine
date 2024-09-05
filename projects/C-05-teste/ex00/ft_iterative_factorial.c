/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:36:52 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/04 20:48:40 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("The factorial of -10 results: %i\n", ft_iterative_factorial(-10));
	printf("The factorial of 0 results: %i\n", ft_iterative_factorial(0));
	printf("The factorial of 5 results: %i\n", ft_iterative_factorial(5));
}
*/
