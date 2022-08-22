/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:54:55 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/22 13:27:34 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int				ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (*(str++) != '\0')
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

// int main (void)
// {
// 	char src[] = "Born to code";
//     char dest [] = "1337 42";
//     printf("%i \n", ft_strlcat(dest, src, 20));
//     printf("%s \n", dest);
// }	
