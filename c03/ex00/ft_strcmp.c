/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:49:13 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/21 17:41:24 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int	main(void)
// {
// 	char *str1;
// 	char *str2;

// 	str1 = "Hello";
// 	str2 = "Helloo";
// 	printf("c  : %d\n", strcmp(str1, str2));
// 	printf("ft : %d\n", ft_strcmp(str1, str2));
// }
