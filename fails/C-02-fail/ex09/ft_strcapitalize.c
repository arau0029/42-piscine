/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:17:35 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 21:30:18 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if ('A' <= str[x] && str[x] <= 'Z')
			str[x] += 32;
		if ('a' <= str[x] && str[x] <= 'z')
		{
			if (x == 0)
				str[x] -= 32;
			else if (x > 0 && !('0' <= str[x - 1] && str[x - 1] <= '9'))
				if (!('A' <= str[x - 1] && str[x - 1] <= 'Z'))
					if (!('a' <= str[x - 1] && str[x - 1] <= 'z'))
						str[x] -= 32;
		}
		x++;
	}
	return (str);
}


#include <stdio.h>

int     main(void)
{
        char arr[] = "$teste bLABLAA 45yoyoyo s=f-fg";
                printf("%s\n", ft_strcapitalize(arr));
        return (0);
}

