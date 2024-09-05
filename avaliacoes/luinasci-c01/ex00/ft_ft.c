/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:41:16 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/20 18:59:41 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int blah = 0;
	printf("Antes: %d\n", blah);
	ft_ft(&blah);
	printf("Depois: %d\n", blah);
	return 0;
}

