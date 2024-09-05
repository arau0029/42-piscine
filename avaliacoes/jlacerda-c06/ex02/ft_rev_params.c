/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:16:20 by jlacerda          #+#    #+#             */
/*   Updated: 2024/09/05 11:30:32 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	main(int argc, char *argv[])
{
	int	index;
	int	arg_program_size;

	index = argc - 1;
	while (index > 0)
	{
		arg_program_size = ft_strlen(argv[index]);
		write(1, argv[index], arg_program_size);
		write(1, "\n", 1);
		index--;
	}
	return (0);
}
