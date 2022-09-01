/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:30:29 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/31 13:00:17 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;
    
    i = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    result = 0;
    while (str[i] > '0' && str[i] < '9')
    {
        result *= 10;
        result += (str[i]) - '0';
        i++;
    }
    return (result * sign);
}

int main(int ac, char **av)
{
    printf("%i", ft_atoi(av[1]));
}
