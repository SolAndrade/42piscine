/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:56:13 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/21 16:59:17 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
		{
			r = 0;
		}
		i++;
	}
	return (r);
}
