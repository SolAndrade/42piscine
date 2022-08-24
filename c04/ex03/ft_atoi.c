/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:44:06 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/24 11:06:01 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_sign(char *str)
{
	int	c;
	int	res;

	res = 1;
	c = 0;
	while (str[c])
	{
		if (str[c] == '-')
			res *= -1;
		c++;
	}
	return (res);
}

int	ft_pow(int b, int e)
{
	int	res;

	res = 1;
	while (e > 0)
	{
		res *= b;
		e--;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	c;
	int	temp1;
	int	res;
	int	i;

	c = 0;
	temp1 = 0;
	res = 0;
	while (str[c] && !(str[c] >= '0' && str[c] <= '9'))
		c++;
	temp1 = c;
	while (str[c] && (str[c] >= '0' && str[c] <= '9'))
		c++;
	str[c + 1] = '\0';
	while (temp1 < c)
	{
		i = str[temp1] - '0';
		res = res * 10 + i;
		temp1++;
	}
	res *= ft_check_sign(str);
	return (res);
}

// int main ()
// {
// 	char a[40] = "---sa-d1556s65-d";
// 	// int i = '0';
// 	// printf("%d\n", i);
// 	printf("%d\n", ft_atoi(a));
// }