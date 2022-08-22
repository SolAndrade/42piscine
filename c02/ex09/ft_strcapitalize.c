/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:36:16 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/21 17:08:08 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);
int		ifaux1(char *c, int aux, int cont);

int	ifaux1(char *c, int aux, int cont)
{
	if ((c[cont] >= 48 && c[cont] <= 57))
		aux = 0;
	if ((c[cont] >= 97 && c[cont] <= 122))
	{
			c[cont] = c[cont] - 32;
			aux = 0;
	}
	if ((c[cont] >= 65 && c[cont] <= 90))
			aux = 0;
	return (aux);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	aux;

	aux = 1;
	c = 0;
	while (str[c] != '\0')
	{
		if (!((str[c] >= 48 && str[c] <= 57) || (str[c] >= 65 && str[c] <= 90)))
		{
			if (!(str[c] >= 97 && str[c] <= 122))
				aux = 1;
		}
		if ((str[c] >= 65 && str[c] <= 90) && aux == 0)
			str[c] = str[c] + 32;
		if (aux == 1)
			aux = ifaux1(str, aux, c);
		c ++;
	}
	return (str);
}
