/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:39:22 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/23 11:39:49 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	char	next_char;
	int		a;

	a = 0;
	while (a == 0)
	{
		next_char = *str;
		if (next_char == '\0')
		{
			break ;
		}
		write(1, &next_char, 1);
		str++;
	}
}
