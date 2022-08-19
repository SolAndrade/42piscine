/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:36:16 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/18 17:50:38 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	str[index] = str[index] - 32;
	while (str[index] != '\0')
	{
		if (str[index] < 48)
		{
			index++;
			if (str[index] >= 97 && str[index] <= 122)
			{
				str[index] = str[index] - 32;
			}
		}
		index++;
	}
	return (str);
}
