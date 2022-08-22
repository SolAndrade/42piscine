/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbengoec <pbengoec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:42:58 by pbengoec          #+#    #+#             */
/*   Updated: 2022/08/21 22:44:23 by pbengoec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_matrix(int row)
{
	char	first;
	char	second;
	char	third;
	char	forth;

	first = row / 1000 + '0';
	second = (row / 100 % 10) + '0';
	third = (row / 10 % 10) + '0';
	forth = (row % 10) + '0';
	write(1, &first, 1);
	write(1, " ", 1);
	write(1, &second, 1);
	write(1, " ", 1);
	write(1, &third, 1);
	write(1, " ", 1);
	write(1, &forth, 1);
	write(1, "\n", 1);
}

void	ft_print_matrix(int *matrix)
{
	ft_write_matrix(matrix[0]);
	ft_write_matrix(matrix[1]);
	ft_write_matrix(matrix[2]);
	ft_write_matrix(matrix[3]);
}
