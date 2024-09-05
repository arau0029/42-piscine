/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:39:07 by acesar-m          #+#    #+#             */
/*   Updated: 2024/08/29 18:18:02 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char maiusc[] = "ABCDEFGH";
	char option1[] = "ABCdefgh";
	char option2[] = "";

	printf("%d", ft_str_is_uppercase(maiusc));
	printf("%d", ft_str_is_uppercase(option1));
	printf("%d", ft_str_is_uppercase(option2));

	return (0);
}

