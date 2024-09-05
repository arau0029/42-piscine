/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:32:25 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/21 17:07:59 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main(void)
{
	int	x;
	int	y;
	int	result_div;
	int	result_mod;
	
	x = 12;
	y = 5;
	result_div = 0;
	result_mod = 0;
	ft_div_mod(x, y, &result_div, &result_mod);
	printf("Div = %i \nMod = %i", result_div, result_mod);
}
*/
