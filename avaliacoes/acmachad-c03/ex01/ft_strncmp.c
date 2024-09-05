/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangel-a <gangel-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:37:09 by acmachad          #+#    #+#             */
/*   Updated: 2024/09/04 17:25:08 by gangel-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (*s1 || *s2)
	{
		i = 0;
		while (n > i)
		{
			if (*s1 != *s2)
				return (*s1 - *s2);
			s1++;
			s2++;
			i++;
		}
	}
	return (0);
}
#include <stdio.h>

int main() 
{
    char str1[] = "Hello";
    char str2[] = "Hellp";
    unsigned int n = 3;

    int result = ft_strncmp(str1, str2, n);

    if (result < 0) {
        printf("'%s' é menor que '%s' até %u caracteres.\n", str1, str2, n);
    } else if (result > 0) {
        printf("'%s' é maior que '%s' até %u caracteres.\n", str1, str2, n);
    } else {
        printf("'%s' e '%s' são iguais até %u caracteres.\n", str1, str2, n);
    }

    return 0;
}