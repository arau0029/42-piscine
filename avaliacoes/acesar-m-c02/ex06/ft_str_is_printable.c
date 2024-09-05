/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:00:58 by acesar-m          #+#    #+#             */
/*   Updated: 2024/08/29 18:19:13 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char	test1[] = "QWERTY!@# ";
	char	test2[] = "";
	char	test3[] = "qwerty\x01";
	char	test4[] = "\x7F";

	printf("%d", ft_str_is_printable(test1));
	printf("%d", ft_str_is_printable(test2));
	printf("%d", ft_str_is_printable(test3));
	printf("%d", ft_str_is_printable(test4));

	return (0);
}

