/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:15:18 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/25 16:28:05 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strrev(char *str);

char *ft_strrev(char *str)
{
    int len;
    int i;
    char tmp;

    len = 0;
    i = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    len--;
    while (len > i)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return (str);
}

// int main()
// {
//     char *str = "abc";
//     ft_strrev(str);
// }
