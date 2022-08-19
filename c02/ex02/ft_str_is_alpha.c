/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:21:05 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/18 16:57:17 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	found;

	found = 1;
	index = 0;
	while (str[index] != '\0' && found != 0)
	{
		if (str[index] < 65 || str[index] > 122)
		{
			found = 0;
		}
		else if (str[index] > 90 && str[index] < 97)
		{
			found = 0;
		}		
		index++;
	}
	return (found);
}
