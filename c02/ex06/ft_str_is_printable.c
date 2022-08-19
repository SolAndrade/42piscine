/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:07:31 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/18 17:17:27 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	index;
	int	found;

	found = 1;
	index = 0;
	while (str[index] != '\0' && found != 0)
	{
		if (str[index] >= 33 && str[index] <= 127)
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
