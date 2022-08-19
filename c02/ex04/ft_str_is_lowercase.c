/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:02:15 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/18 17:04:24 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	found;

	found = 1;
	index = 0;
	while (str[index] != '\0' && found != 0)
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			found = 1;
		}
		else
		{
			found = 0;
		}		
		index++;
	}
	return (found);
}
