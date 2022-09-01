/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:02:26 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/31 15:09:30 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_checkdoubles(char *str, char c);
void ft_union(char *str1, char *str2);
int	ft_checkdoubles2(char *str, char letter, int i);

int ft_checkdoubles(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int	ft_checkdoubles2(char *str, char c, int i)
{
	while (i >= 0)
	{
		if (str[i] == c)
			return (1);
		i--;
	}
	return (0);
}

void ft_union(char *str1, char *str2)
{
    int i;

    i = 0;
    while (str1[i] != '\0')
    {
        if (ft_checkdoubles2(str1, str1[i], i - 1) == 0)
            write (1, &str1[i], 1);
        i++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        if (ft_checkdoubles(str1, str2[i]) == 0 && ft_checkdoubles2(str2, str2[i], i - 1) == 0)
            write(1, &str2[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_union(av[1], av[2]);
    }
    else
        write(1, "\n", 1);
}