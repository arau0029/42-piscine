/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:38:44 by luinasci          #+#    #+#             */
/*   Updated: 2024/08/20 19:12:37 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	char mensagem[100];

	printf("Escreve qualquer porcaria:");
	scanf("%99s", mensagem);

	ft_putstr(mensagem);
	printf("\n");

	return 0;
}

