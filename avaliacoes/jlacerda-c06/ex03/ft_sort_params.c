/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacerda <jlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:17:57 by jlacerda          #+#    #+#             */
/*   Updated: 2024/09/05 11:30:33 by jlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	is_different;

	index = 0;
	if (s1[0] == '\0')
	{
		return (s1[0] - s2[0]);
	}
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		is_different = s1[index] != s2[index];
		if (is_different)
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

void	ft_sort_params(char **params, int size)
{
	char	*aux;
	int		index;
	int		next_param_index;
	char	*current_param;
	char	*next_param;

	index = 0;
	while (index < size)
	{
		next_param_index = index + 1;
		while (next_param_index < size)
		{
			current_param = params[index];
			next_param = params[next_param_index];
			if (ft_strcmp(next_param, current_param) < 0)
			{
				aux = current_param;
				params[index] = next_param;
				params[next_param_index] = aux;
			}
			next_param_index++;
		}
		index++;
	}
}

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

int	main(int arg_c, char *arg_v[])
{
	int	index;
	int	str_len;

	if (arg_c > 1)
	{
		arg_v++;
		ft_sort_params(arg_v, arg_c - 1);
		index = 0;
		while (index < arg_c - 1)
		{
			str_len = ft_strlen(arg_v[index]);
			write(1, arg_v[index], str_len);
			write(1, "\n", 1);
			index++;
		}
	}
	return (0);
}
