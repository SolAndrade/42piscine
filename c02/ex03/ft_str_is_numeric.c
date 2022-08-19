/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:57:49 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/18 17:01:35 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	found;

	found = 1;
	index = 0;
	while (str[index] != '\0' && found != 0)
	{
		if (str[index] >= 48 && str[index] <= 57)
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
