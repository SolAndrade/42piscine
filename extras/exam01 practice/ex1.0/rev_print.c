/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:27:55 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/19 12:51:52 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_rev_print(char *str);
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

char	*ft_rev_print(char *str)
{
	int length;

	length = ft_strlen(str) - 1;

	while (str[length])
	{
		write(1, &str[length], 1);
		length--;
	}
	write(1, "\n", 2);
	return (str);
}

int main(int argc, char **argv)
{
	int	index;

	index = 0;
	if(argc >= 2)
	{
		while(argv[index])
		{
			if(index >=1)
			{
				ft_rev_print(argv[index]);	
			}
			index++;
		}
	}
}
