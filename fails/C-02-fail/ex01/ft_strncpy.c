/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:44:53 by gangel-a          #+#    #+#             */
/*   Updated: 2024/08/29 12:29:12 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;
	char			*rtrn;

	x = 0;
	rtrn = dest;
	while (x < n)
	{
		dest[x] = src[x];
		if (src[x] == '\0' || !src[x])
			dest[x] = '\0';
		x++;
	}
	return (rtrn);
}
