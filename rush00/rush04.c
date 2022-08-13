/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:57:22 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/13 13:48:03 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_putchar(char c);
void		ft_length_print(int length, int y, int x, int width);

void	rush(int x, int y)
{
	int	width;
	int	length;

	length = 0;
	if ((x > 0) && (y > 0))
	{
		while (length < y)
		{
			width = 0;
			while (width < x)
			{
				ft_length_print(length, y, x, width);
				width++;
			}
			ft_putchar('\n');
			length++;
		}
	}
}

void	ft_length_print(int length, int y, int x, int width)
{
	if (length == 0)
	{
		if (width == 0)
			ft_putchar('A');
		else if (width == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (length == y - 1)
	{
		if (width == 0)
			ft_putchar('C');
		else if (width == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if ((width == 0) || (width == x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
