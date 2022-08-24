/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:21:15 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/24 17:52:33 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb)
{
    int c;

    c = 2;
    while (c < nb)
    {
        if (c * c == nb)
            return (c);
    }
}

int main()
{
    printf("%d", ft_sqrt(4));
}