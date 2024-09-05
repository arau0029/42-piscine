/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:16:54 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:34:50 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (!(64 < str[x] && str[x] < 91) && !(96 < str[x] && str[x] < 123))
			return (0);
		x++;
	}
	return (1);
}

/*
int	main(void)
{
	char	teste1[] = {"sdlfhkaHFLLJ"};
	char	teste2[] = {"3h489dfdf"};
	char	teste3[] = {"/+fghGHHH+"};
	char	teste4[] = {""};

	printf("teste 1 = %i teste 2 = %i 
		teste 3 = %i teste 4 = %i", ft_str_is_alpha(teste1), 
			ft_str_is_alpha(teste2), ft_str_is_alpha(teste3), 
				ft_str_is_alpha(teste4));
}
*/
