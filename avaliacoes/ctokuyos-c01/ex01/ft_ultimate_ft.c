/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctokuyos <ctokuyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:59:53 by ctokuyos          #+#    #+#             */
/*   Updated: 2024/09/02 16:56:01 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	c;
	int	*nbr1 = &c;
	int	**nbr2 = &nbr1;
	int	***nbr3 = &nbr2;
	int	****nbr4 = &nbr3;
	int	*****nbr5 = &nbr4;
	int	******nbr6 = &nbr5;
	int	*******nbr7 = &nbr6;
	int	********nbr8 = &nbr7;
	int	*********nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);
	printf ("%i", c);
	return (0);
}
