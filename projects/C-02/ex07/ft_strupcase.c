/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:23:25 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:31:51 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (96 < str[x] && str[x] < 123)
			str[x] -= 32;
		x++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_strupcase(argv[1]);
	printf("%s", ft_strupcase(argv[1]));
	return (0);
}
*/
