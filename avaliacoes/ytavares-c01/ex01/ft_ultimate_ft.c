/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:14:47 by ytavares          #+#    #+#             */
/*   Updated: 2024/08/27 18:36:50 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int number;
        int *nbr;
        int **nbr2;
        int ***nbr3;
        int ****nbr4;
        int *****nbr5;
        int ******nbr6;
        int *******nbr7;
        int ********nbr8;
        int *********nbr9;
	
	number = 100;
	nbr = &number;
        nbr2 = &nbr;
        nbr3 = &nbr2;
        nbr4 = &nbr3;
        nbr5 = &nbr4;
        nbr6 = &nbr5;
        nbr7 = &nbr6;
        nbr8 = &nbr7;
        nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);
	printf("%d", number);
	return (0);
}
