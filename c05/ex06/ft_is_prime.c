/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:59:18 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/26 11:34:36 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb <= 1)
		return (0);
	while (c <= (nb / 2))
	{
		if (!(nb % c))
			return (0);
		else
			c += 1;
	}
	return (1);
}

int main()
{
    printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
}