/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:13:41 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/21 20:11:11 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.c"
#include <stdio.h>

int	main()
{
	char *views =   "2 1 4 3 1 2 4 3 2 1 2 4 3 2 2 1";
	int *p;
	int i;
	
	p = ft_take_integers(views);
	i = 0;

	ft_init(p);
	return (0);
}

