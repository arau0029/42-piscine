/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:58:20 by acesar-m          #+#    #+#             */
/*   Updated: 2024/08/29 18:17:31 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char minus[] = "abcdefgh";
	char option1[] = "abc123ef";
	char option2[] = "";

	printf("%d", ft_str_is_lowercase(minus));
	printf("%d", ft_str_is_lowercase(option1));
	printf("%d", ft_str_is_lowercase(option2));
	
	return (0);
}
