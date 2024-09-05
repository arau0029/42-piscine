/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedvieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:07:49 by pedvieir          #+#    #+#             */
/*   Updated: 2024/08/27 17:31:31 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cursor;

	cursor = 0;
	while (str[cursor] != '\0')
		cursor++;
	return (cursor);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "hello world";
	int		size = ft_strlen(str);

	printf ("the string '%s' he has '%d' characters.\n", str, size);
	return (0);
}

