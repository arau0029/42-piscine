/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctokuyos <ctokuyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 01:36:19 by ctokuyos          #+#    #+#             */
/*   Updated: 2024/09/02 17:13:38 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 1;
	while (i < size)
	{
		while (tab[i - 1] > tab[i])
		{
		temp = tab[i - 1];
		tab[i - 1] = tab[i];
		tab [i] = temp;
		i = 1;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {4, 3, 1, 2, 5};
	int	i;
	
	ft_sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf ("%d", tab[i]);
		i++;
	}
	return (0);
}
