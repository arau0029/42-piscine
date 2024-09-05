/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:37:21 by yvieira-          #+#    #+#             */
/*   Updated: 2024/09/02 18:58:49 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] <= 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int	main(void)
{
	int result;
	result = ft_str_is_printable("\n\0");
	printf("%d\n", result);
	return (0);
}