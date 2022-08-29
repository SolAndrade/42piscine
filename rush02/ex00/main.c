/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:57:06 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/28 21:36:43 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_checknbr(char *str);
char	*ft_read_dict(char *file_name);
void	ft_strstr(char *str, char *to_find);
void	ft_printnbr(char *buf, char *to_print, int len);
int		ft_strlen(char *str);

int	main(int ac, char **av)
{
	char	*buf;
	int		len;

	if (ac == 2)
	{
		if (ft_checknbr(av[1]) == 0)
		{
			buf = ft_read_dict("numbers.dict");
			len = ft_strlen(av[1]);
			ft_printnbr(buf, av[1], len);
		}
		else
			write(1, "Error", 5);
	}
}
