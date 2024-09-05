/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:12:53 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/21 16:33:33 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_result;
	int	mod_result;

	if (b > 0)
	{
		div_result = *a / *b;
		mod_result = *a % *b;
		*a = div_result;
		*b = mod_result;
	}
}

/*
int main(void)
{
	int x;
	int y;

	x = 12;
	y = 10;
	printf("Integers: x = %i, y = %i\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("x(div result) = %i, y(mod result) = %i", x, y);
}
*/
