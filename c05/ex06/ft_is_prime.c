/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:59:18 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/24 18:43:23 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

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

int main()
{
    printf("%d", ft_is_prime(2));
	printf("%d", ft_is_prime(3));
	printf("%d", ft_is_prime(4));
	printf("%d", ft_is_prime(10));
}