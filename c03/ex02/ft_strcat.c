/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:42:50 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/22 13:25:35 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*final;

	final = dest;
	while (*final != '\0')
	{
		final++;
	}
	while (*src != '\0')
	{
		*final = *(unsigned char *)src;
		final++;
		src++;
	}
	*final = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char	*str_base;
// 	char	dest[100];
// 	char	dest2[100];
// 	char	*src;
// 	int		index;

// 	str_base = "Hello";
// 	src = " World";
// 	index = 0;
// 	while (index < 6)
// 	{
// 		dest[index] = str_base[index];
// 		dest2[index] = str_base[index];
// 		index++;
// 	}
// 	printf("c  : %s$\n", strcat(dest, src));
// 	printf("ft : %s$\n", ft_strcat(dest2, src));
// }
