/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:39:34 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/21 17:42:18 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		while (*s1 != '\0' && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		index++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int	main(void)
// {
// 	char *str1;
// 	char *str2;

// 	str1 = "dsa";
// 	str2 = "ddsa";
// 	printf("c  : %d\n", strncmp(str1, str2, 3));
// 	printf("ft : %d\n", ft_strncmp(str1, str2, 3));
// }