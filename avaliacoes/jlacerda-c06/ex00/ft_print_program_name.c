/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:14:19 by jlacerda          #+#    #+#             */
/*   Updated: 2024/09/05 11:30:25 by jlacerda         ###   ########.fr       */
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
	int	arg_program_size;

	arg_program_size = argc;
	arg_program_size = ft_strlen(argv[0]);
	write(1, argv[0], arg_program_size);
	write(1, "\n", 1);
	return (0);
}
