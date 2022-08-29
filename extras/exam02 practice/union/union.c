/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:09:07 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/26 12:31:35 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int check_doubles(char *str, char c, int pos)
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

int check_doubles1(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void ft_union(char *str, char *str1)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        if (check_doubles(str, str[i], i) == 1)
            write(1, &str[i], 1);
        i++;
    }
    i = 0;
    while (str1[i] != '\0')
    {
        if (check_doubles1(str, str1[i]) == 1)
        {
            if (check_doubles(str1, str1[i], i) == 1)
                write(1, &str1[i], 1);    
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}
