/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:49:44 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/13 13:15:48 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb()
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
	while(n1<=9){
        while(n2<=9){
            while(n3<=9){ 
                printf(n1 + n2 +q n3);
                n3++;
            }
            n2++;
        }
        n1++;
    }
    
}
int main(){
    ft_print_comb();
    return(0);
}