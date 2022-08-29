/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:28:48 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/25 16:57:53 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_check_doubles(char *str, char c, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    char *str;
    int i1;
    int i2;
    
    i1 = 0;
    if (ac == 3)
    {
        while (av[1][i1] != '\0')
        {
            i2 = 0;
            while (av[2][i2] != '\0')
            {
                if (av[2][i2] == av[1][i1])
                {
                    if (ft_check_doubles(av[1], av[1][i1], i1) == 1)
                    {
                        write(1, &av[1][i1], 1);
                        break ;
                    }
                }
                i2++;
                
            }
            i1++;
        }
        write (1, &str,1);
    }
    else
        write (1, "\n", 1);
}
