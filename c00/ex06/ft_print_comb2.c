/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:53:21 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/15 09:29:52 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);
void	write_numbers(int i, int d);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (i <= 99)
	{
		d = i + 1;
		while (d <= 99)
		{
			write_numbers(i, d);
			d++;
		}
		i++;
	}
}

void	write_numbers(int i, int d)
{
	if (i == 98)
	{
		ft_putchar ((i / 10) + '0');
		ft_putchar ((i % 10) + '0');
		ft_putchar (' ');
		ft_putchar ((d / 10) + '0');
		ft_putchar ((d % 10) + '0');
	}
	else
	{
		ft_putchar ((i / 10) + '0');
		ft_putchar ((i % 10) + '0');
		ft_putchar (' ');
		ft_putchar ((d / 10) + '0');
		ft_putchar ((d % 10) + '0');
		ft_putchar (',');
		ft_putchar (' ');
	}
}
