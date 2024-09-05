/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:33:34 by acesar-m          #+#    #+#             */
/*   Updated: 2024/08/29 18:14:38 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char op1[] = "123456";
	char op2[] = "123asd";
	char op3[] = "";
	
	printf("%d", ft_str_is_numeric(op1));
	printf("%d", ft_str_is_numeric(op2));
	printf("%d", ft_str_is_numeric(op3));

	return (0);
}
