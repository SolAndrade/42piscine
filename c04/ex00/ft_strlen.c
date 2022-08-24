/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:38:06 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/23 11:38:44 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

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
