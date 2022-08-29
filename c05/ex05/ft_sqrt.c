/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:21:15 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/26 11:32:21 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	c;
	long	i;

	c = nb;
	i = 2;
	if (c <= 0)
		return (0);
	if (c == 1)
		return (1);
	if (c >= 2)
	{
		while (i * i <= c)
		{
			if (i * i == c)
				return (i);
			i++;
		}
	}
	return (0);
}

int main()
{
    printf("%d", ft_sqrt(5));
}