/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:14:09 by acmachad          #+#    #+#             */
/*   Updated: 2024/09/04 17:30:57 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
			{
				dest = &str[i];
				return (dest);
			}
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int main(void)
{
    char src[50] = "acalus sereno machado ";
    char to_find[] = "lusbibi";
    printf("%s\n", ft_strstr(src, to_find));
    return 0;
}
