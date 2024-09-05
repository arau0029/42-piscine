/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytavares <ytavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:47:43 by ytavares          #+#    #+#             */
/*   Updated: 2024/08/21 14:57:54 by ytavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)

{
	int	nbr;
	int	*ponteiro;

	ponteiro = &nbr;
	ft_ft(ponteiro);
	printf("%d", nbr);
	return (0);
}
