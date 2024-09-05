/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:49:34 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/04 20:56:11 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return(0);
	while (nb > 0)
	{
		result *
		ft_recursive_factorial(nb);
		nb--;
	}	
}


#include <stdio.h>

int     main(void)
{
        printf("The factorial of -10 results: %i\n", ft_iterative_factorial(-10));
        printf("The factorial of 0 results: %i\n", ft_iterative_factorial(0));
        printf("The factorial of 5 results: %i\n", ft_iterative_factorial(5));
}
