/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:47:06 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:33:43 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (!(31 < str[x] && str[x] < 127))
			return (0);
		x++;
	}
	return (1);
}

/*
int	main(void)
{
        char    teste1[] = {"985860958"};
        char    teste2[] = {127};
        char    teste3[] = "fhgkfjgh\njgjlhjhlgkjf";
        char    teste4[] = {""};

        printf("teste 1 = %i teste 2 = %i teste 3 = %i 
			teste 4 = %i", ft_str_is_printable(teste1), 
				ft_str_is_printable(teste2), ft_str_is_printable(teste3), 
					ft_str_is_printable(teste4));
}
*/
