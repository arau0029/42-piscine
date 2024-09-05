/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:27:51 by gangel-a          #+#    #+#             */
/*   Updated: 2024/09/05 16:45:20 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		write(1, &arg[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **argv, int argc, int i)
{
	char	*temp;

	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
		}
		i++;
	}
	return ;
}

void	ft_printarg(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 0;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	if (argc > 2)
	{
		while (j < argc - 2)
		{
			i = 1;
			ft_swap(argv, argc, i);
			j++;
		}
		ft_printarg(argc, argv);
	}
}
