/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbengoec <pbengoec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:13:41 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/21 22:34:15 by pbengoec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*ft_take_integers(char *views);
int	*ft_init(int *nbrs);

int	main(int argc, char **argv)
{
	int	*p;
	int	i;

	if (argc != 2)
	{
		return (1);
	}
	else
	{
		p = ft_take_integers(argv[1]);
		i = 0;
	}
	ft_init(p);
	return (0);
}
