/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:29:29 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/30 12:09:00 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	iav;
	int	ichar;

	ichar = 0;
	iav = 1;
	if (ac > 1)
	{	
		while (av[iav])
		{
			ichar = 0;
			while (av[iav][ichar] != '\0')
			{
				write (1, &av[iav][ichar], 1);
				ichar++;
			}
			write(1, "\n", 1);
			iav++;
		}
	}
}
