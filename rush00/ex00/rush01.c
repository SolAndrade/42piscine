/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:55:47 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/14 16:04:28 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);
void		ft_length_print(int length, int y, int x, int width);
void		rush(int x, int y);

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
			ft_putchar('/');
		else if (width == x - 1)
			ft_putchar(92);
		else
			ft_putchar('*');
	}
	else if (length == y - 1)
	{
		if (width == 0)
			ft_putchar(92);
		else if (width == x - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if ((width == 0) || (width == x - 1))
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}
