/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:21:48 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/22 13:26:10 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*final;

	final = dest;
	while (*final != '\0')
		final++;
	while (*src != '\0' && nb > 0)
	{
		*final = *(unsigned char *)src;
		final++;
		src++;
		nb--;
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
// 	printf("c  : %s$\n", strncat(dest, src, 4));
// 	printf("ft : %s$\n", ft_strncat(dest2, src, 4));
// }