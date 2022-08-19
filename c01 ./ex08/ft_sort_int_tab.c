/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:06:09 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/17 10:29:28 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	aux;
	int	unorder;

	unorder = 0;
	while (!unorder)
	{
		c = 1;
		unorder = 1;
		while (c < size)
		{
			if (tab[c] < tab [c - 1])
			{
				aux = tab[c];
				tab[c] = tab[c - 1];
				tab[c - 1] = aux;
				unorder *= 0;
			}
			c++;
		}
	}
}
