/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:03:47 by soandrad          #+#    #+#             */
/*   Updated: 2022/09/01 16:04:21 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_checkspace(char c);
int ft_countwords(char *str);
char **ft_split(char *str);

int ft_checkspace(char c)
{
    if (c == '\t' || c == 0 || c == ' ' || c == '\n')
        return (1);
    return (0);
}

int ft_countwords(char *str)
{
    int words;
    int i;

    i = 0;
    words = 0;
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && ft_checkspace(str[i]))
            i++;
        if (str[i] != '\0')
            words++;
        while (str[i] != '\0' && !ft_checkspace(str[i]))
            i++;
    }
    return (words);
}

char **ft_split(char *str)
{
    char *str;
    words = ft_countwords(str);
    str = charmalloc(sizeof(char *) * words + 1);
}

int main(void)
{
    char *str = "a b c";
    printf("%i", ft_countwords(str));
}

