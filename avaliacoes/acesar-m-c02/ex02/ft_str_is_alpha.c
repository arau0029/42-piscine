/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:09:21 by acesar-m          #+#    #+#             */
/*   Updated: 2024/08/29 18:13:02 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
			return (0);
		str++;
	}
	return (1);
}

#include	<stdio.h>
int	main(void)
{
	char	text[] = "Ola mun4dao!";
	char	text2[] = "test";
	char	num[] = "15";
	char	vaz[] = "";
	
	ft_str_is_alpha(text);
	printf("%d", ft_str_is_alpha(text));
	printf("%d", ft_str_is_alpha(text2));
	printf("%d", ft_str_is_alpha(num));
	printf("%d", ft_str_is_alpha(vaz));
	return 0;
}
