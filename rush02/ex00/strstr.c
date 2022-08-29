/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:50:21 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/28 21:45:56 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_read_dict(char *file_name);
int		ft_strlen(char *str);

void	ft_strstr(char *buf, char *to_find)
{
	int	i;
	int	j;
	int	backi;
	int	flag;
	int	len;

	i = 0;
	j = 0;
	backi = i;
	flag = 1;
	len = ft_strlen(to_find);
	if (to_find[j] == '\0')
		write(1, "Error", 5);
	while (buf[i] != '\0')
	{
		j = 0;
		backi = i;
		flag = 1;
		while (to_find[j])
		{
			if (buf[backi] != to_find[j])
				flag = 0;
			backi++;
			j++;
		}
		if (buf[backi] != ':')
			flag = 0;
		j = 0;
		if (flag == 1)
		{
			j = i;
			while (buf[j] < 'a' || buf[j] > 'z')
				j++;
			while (buf[j] != '\n')
			{
				write (1, &buf[j], 1);
				j++;
			}
			write(1, " ", 1);
		}
		if (j != 0)
			break ;
		i++;
	}
}
