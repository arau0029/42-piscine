/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:20:23 by lhenriqu          #+#    #+#             */
/*   Updated: 2024/08/15 19:27:22 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	*alph;

	alph = "abcdefghijklmnopqrstuvwxyz";
	write(1, alph, 26);
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}

