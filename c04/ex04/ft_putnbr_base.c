/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:19:27 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/24 10:50:58 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_base_change(int i, char *base, int len)
{
	if (i >= len)
	{
		ft_base_change(i / len, base, len);
		write(1, &base[i % len], 1);
	}
	write(1, &base[i], 1);
}

int	ft_check(char *base)
{
	int	error;
	int	c;
	int	i;

	c = 0;
	i = 0;
	error = 0;
	while (base[c] && !error)
	{
		i = c + 1;
		if (base[c] == '-' || base[c] == '+')
			error = 1;
		while (base[i] && !error)
		{
			if (base[c] == base[i])
				error = 1;
			i++;
		}
		c++;
	}
	return (error);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	if (len > 1 && !ft_check(base))
	{
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			ft_base_change(214748364 / len, base, len);
			ft_base_change(8 % len, base, len);
		}
		else if (nbr < 0)
		{
			nbr *= -1;
			write(1, "-", 1);
		}
		ft_base_change(nbr, base, len);
	}
}

// int main(){
//     // ft_putnbr_base(-23, "0123456789abcdef");
//     ft_putnbr_base(-2147483648, "0123456789");
//     // ft_putnbr_base(2147483647, "0123456789");
//     // ft_putnbr_base(-2147483647, "01");
//     // ft_putnbr_base(-23, "P-ONY");
//     // ft_putnbr_base(-23, "1");
//     // ft_putnbr_base(-23, "");

// }