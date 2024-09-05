/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedvieir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:34:53 by pedvieir          #+#    #+#             */
/*   Updated: 2024/08/27 17:28:57 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	string;

	string = 0;
	while (str[string])
		string++;
	write(1, str, string);
}

int	main(void)
{
	ft_putstr("Hello good afternoon my name is Pedro");
}
