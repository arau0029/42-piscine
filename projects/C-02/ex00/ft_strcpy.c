/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:05:09 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:29:02 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int		x;
	char	*rtrn;

	x = 0;
	rtrn = dest;
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (rtrn);
}

/*
int	main(void)
{
	char	string[] = "This is a string.";
	char	dest[99];

	printf("%s", ft_strcpy(dest, string));
}
*/
