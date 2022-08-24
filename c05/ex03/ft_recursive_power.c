/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:33:04 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/24 13:16:57 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
    if (power > 0)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else
		return (1);
}

// int main()
// {
//     printf("%d\n", ft_recursive_power(2, 4));
// }
