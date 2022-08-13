/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:53:21 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/12 13:42:32 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
void    ft_print_comb2(void);
void    ft_print_comb2(void)
{
    int n1, n2, n3, n4;
    n1 = '0';
    n2 = '0';
    n3 = '0';
    n4 = '1';
    while (n1 <= '9'){
        n2 = '0';
        while (n2 <= '9'){
            n3 = '0';
            n4 = n2 + 1;
            while (n3 <= '9'){
                while(n4 <= '9'){
                    if (n1 == '9' && n2 == '9' && n3 == '9' && n4 == '9'){
                      write(1, &n1, 1);
                      write(1, "8", 2);
                      write(1, " ", 2);
                      write(1, &n3, 1);
                      write(1, &n4, 1);
                      write(1, ", ", 2);
                    }else{
                    write(1, &n1, 1);
                    write(1, &n2, 1);
                    write(1, " ", 2);
                    write(1, &n3, 1);
                    write(1, &n4, 1);
                    write(1, ", ", 2);
                    }
                    n4++;
                }
                n4 = '0';
                n3++;
            }
            n2++;
        }
        n1++;
    }
}
int main(){
    ft_print_comb2();
}
