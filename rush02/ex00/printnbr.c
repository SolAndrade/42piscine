/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:45:20 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/28 21:42:01 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);
void	ft_addzeros(int len, char *buf);
char	*ft_read_dict(char *file_name);
void	ft_rest_1(char *to_print, int *i, int *len, char *print);
void	ft_rest_2(char *to_print, int *i, int *len, char *print);
void	ft_rest_0(char *to_print, int *i, int *len, char *print);

void	ft_printnbr(char *buf, char *to_print, int len)
{
	char	*print;
	int		i;
	int		iprint;
	int		initlen;

	i = 0;
	initlen = len;
	iprint = 0;
	print = (char *)malloc (len);
	while (to_print[i] == '0')
	{
		i++;
		len--;
		if (to_print[i] == '\0')
			ft_strstr(buf, "0");
	}
	while (len > 0)
	{
		print[1] = '\0';
		if (len % 3 == 0)
			ft_rest_0(to_print, &i, &len, print);
		if (len % 3 == 2)
			ft_rest_2(to_print, &i, &len, print);
		if (len % 3 == 1)
		{
			if (len > initlen - 3 || to_print[i] != '0')
				ft_rest_1(to_print, &i, &len, print);
		}
		i++;
		len--;
	}
}

void	ft_rest_1(char *to_print, int *i, int *len, char *print)
{
	char	*buf;

	buf = ft_read_dict("numbers.dict");
	if (to_print[*i] != '0')
	{
		if (to_print[*i - 1] != '1')
		{
			print[0] = to_print[*i];
			ft_strstr(buf, print);
		}
	}
	if (*len > 1)
		ft_addzeros(*len, buf);
	print[1] = '\0';
}

void	ft_rest_2(char *to_print, int *i, int *len, char *print)
{
	int		iprint;
	char	*buf;

	buf = ft_read_dict("numbers.dict");
	iprint = 0;
	if (to_print[*i] != '0')
	{
		print[iprint] = to_print[*i];
		if (print[iprint] == '1')
		{
			print[iprint + 1] = to_print[*i + 1];
			ft_strstr(buf, print);
		}
		else
		{
			print[iprint + 1] = '0';
			ft_strstr(buf, print);
		}
	}
	if (*len > 2)
		ft_addzeros(*len, buf);
	print[1] = '\0';
}

void	ft_rest_0(char *to_print, int *i, int *len, char *print)
{
	int		iprint;
	char	*buf;

	buf = ft_read_dict("numbers.dict");
	iprint = 0;
	if (to_print[*i] != '0')
	{
		print[iprint] = to_print[*i];
		ft_strstr(buf, print);
		if (*len > 3 && to_print[*i] != '0')
		{
			ft_strstr(buf, "100");
			ft_addzeros(*len, buf);
		}
		ft_addzeros(*len, buf);
	}
	print[iprint] = '\0';
}

void	ft_addzeros(int len, char *buf)
{
	int		iprintzero;
	int		lenzero;
	char	*printzeros;

	iprintzero = 1;
	printzeros = (char *)malloc (len);
	lenzero = len - 1;
	printzeros[0] = '1';
	while (lenzero > 0)
	{
		printzeros[iprintzero] = '0';
		lenzero--;
		iprintzero++;
	}
	ft_strstr(buf, printzeros);
}
