/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:28:03 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/21 17:32:39 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}

/*
int	main(void)
{
	char e[]= {"this is a string."};

	printf("This is the length of the string: %i\n", ft_strlen(e));
}
*/
