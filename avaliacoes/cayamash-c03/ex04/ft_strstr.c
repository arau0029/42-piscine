/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:22:39 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/27 18:11:51 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i] == to_find[j]) || str[i] == '\0' || to_find[j] == '\0')
		{
			if (to_find[j] == '\0')
				return (&str[i - j]);
			else if (str[i] == '\0')
				return (NULL);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(int argc, char *argv[])
{
	if(argc == 3)
	{
		char *s1;
		char *s2;

		s1 = strstr(argv[1], argv[2]);
		s2 = ft_strstr(argv[1], argv[2]);
		printf("%s\n", s1);
		printf("%s\n", s2);
	}
	return (0);
}
