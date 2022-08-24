/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:12:37 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/24 18:46:09 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	while (c <= nb / 2)
	{
		if (nb % c == 0)
			return (0);
	    c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	c;
    int isprime;

	c = 2;
    nb++;
	while (c <= nb / 2)
	{
		if (nb % c == 0)
			nb++;
		else
        {
            if (ft_is_prime(nb) == 1)
                return (nb);
        }
        c++;
	}
    return (nb);
    // while (!ft_is_prime(nb++))
    //     nb++;
    // return (nb++);
}

// int main()
// {
//     printf("%d", ft_find_next_prime(20));
//     // printf("%d", ft_is_prime(10));
// }
