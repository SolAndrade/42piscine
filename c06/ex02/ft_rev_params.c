/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:26:50 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/31 16:40:54 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	argc--;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i])
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
