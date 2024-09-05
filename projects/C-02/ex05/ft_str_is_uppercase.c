/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:41:34 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:30:38 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (!(64 < str[x] && str[x] < 91))
			return (0);
		x++;
	}
	return (1);
}

/*
int     main(void)
{
        char    teste1[] = {"FJKHGKDJHJKGFH"};
        char    teste2[] = {"3h489dfdf"};
        char    teste3[] = {"/+fghGHHH+"};
        char    teste4[] = {""};

        printf("teste 1 = %i teste 2 = %i teste 3 = %i 
			teste 4 = %i", ft_str_is_uppercase(teste1), 
				ft_str_is_uppercase(teste2), ft_str_is_uppercase(teste3), 
					ft_str_is_uppercase(teste4));
}
*/
