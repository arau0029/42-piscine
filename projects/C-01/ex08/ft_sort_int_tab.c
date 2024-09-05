/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:30:21 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/21 16:43:19 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	x;
	int	y;
	int	n;

	y = 0;
	n = size;
	while (y < (size - 1))
	{
		while (x < n)
		{
			if ((x + 1) < n && tab[x] > tab[x + 1])
			{
				temp = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = temp;
			}
			x++;
		}
		x = 0;
		n--;
		y++;
	}
}

/*
int	main(void)
{
	int	arr[] = {55, 77, 24, 31, 7};

	printf("Array before:");
	for (int i = 0; i < 5; i++)
	{
		printf("%i, ", arr[i]);
	}
	ft_sort_int_tab(arr, 5);
	printf("\n Array after:");
	for (int i = 0; i < 5; i++)
	{
		printf("%i, ", arr[i]);
	}
}
*/
