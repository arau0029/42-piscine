/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctokuyos <ctokuyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:04:57 by ctokuyos          #+#    #+#             */
/*   Updated: 2024/09/02 17:10:44 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

int	main(void)
{
	int	i = 0;
	int	tab[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}
