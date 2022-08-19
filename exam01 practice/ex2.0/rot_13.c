/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:03:59 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/19 13:35:17 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rot_13(char *str);

void	rot_13(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'A' && str[index] <= 'M') || (str[index] >= 'a' && str [index] <= 'm'))
		{
			str[index] += 13;
		}
		else if ((str[index] >= 'N' && str[index] <= 'Z') || (str[index] >= 'n' && str[index] <= 'z'))
		{
			str[index] -= 13;
		}
		write(1, &str[index], 1);
		index++;
	}
}

int main(int argc, char **argv)
{
	int index;

	index = 1;
	if(argc >= 2)
	{
		while(argv[index])
		{
			rot_13(argv[index]);
			index++;
		}
	}
}

