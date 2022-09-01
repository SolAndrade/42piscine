/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:12:42 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/31 15:40:16 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int start, int end);

int        ft_abs(int x)
{
    if (x < 0)
        return (-x);
    return (x);
}

int *ft_range(int start, int end)
{
    int size;
    int i;
    int *tab;
    int *d;

    size = ft_abs(end - start) + 1;
    d = (tab = malloc(size * sizeof(int)));
    if (!d)
        return (0);
    i = 0;
    if (size == 1)
        tab[0] = start;
    if (start < end)
    {
        while (i < size)
        {
            tab[i] = start + i;
            i++;
        }
    }
    else if (start > end)
    {
        while (i < size)
        {
            tab[i] = start - i;
            i++;
        }
    }
    return (tab);
}

int        main(void)
{
    int *tab;
    int i = 0;
    int start = 1;
    int end = 8;
    int size = ft_abs(end - start) + 1;
    
    tab = ft_range(start, end);
    while(i < size)
    {
    printf("%i ", tab[i]);
    i++;
    }
}