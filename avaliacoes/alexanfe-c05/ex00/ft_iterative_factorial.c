/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexanfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:29:00 by alexanfe          #+#    #+#             */
/*   Updated: 2024/09/03 19:37:46 by alexanfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;

	if (nb < 0)
		return (0);
	value = 1;
	while (nb > 0)
	{
		value *= nb;
		nb--;
	}
	return (value);
}
