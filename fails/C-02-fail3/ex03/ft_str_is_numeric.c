/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:20:33 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:29:43 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (!(47 < str[x] && str[x] < 58))
			return (0);
		x++;
	}
	return (1);
}

/*
#include <stdio.h>

int     main(void)
{
        char    teste1[] = {"985860958"};
        char    teste2[] = {"3h489dfdf"};
        char    teste3[] = {"/+fghGHHH+"};
        char    teste4[] = {""};

        printf("teste 1 = %i teste 2 = %i teste 3 = %i 
			teste 4 = %i", ft_str_is_numeric(teste1), 
				ft_str_is_numeric(teste2), ft_str_is_numeric(teste3), 
					ft_str_is_numeric(teste4));
}
*/