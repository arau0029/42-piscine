/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleal-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 04:00:33 by lleal-go          #+#    #+#             */
/*   Updated: 2024/08/29 16:14:34 by lleal-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	i;
	char	*string;

	string = "lais";
	i = 0;
	i = ft_str_is_printable(string);

	printf("%d\n", i);

	return (0);
}
*/
