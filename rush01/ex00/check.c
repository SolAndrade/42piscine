/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbengoec <pbengoec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:13:23 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/21 22:44:35 by pbengoec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_get_row(int pos, int izq, int der);

//Dividir los input en una lista para poder controlarlo mejor
int	*ft_take_integers(char *views)
{
	static int	nbrs[16];
	int			index;
	int			indexnbrs;

	indexnbrs = 0;
	index = 0;
	while (views[index])
	{
		if (views[index] >= 49 && views[index] <= 52)
		{
			nbrs[indexnbrs] = views[index] -48;
			indexnbrs++;
		}
		index++;
	}
	return (nbrs);
}

//Guardar las posibilidades que tienen el número de la izquierda
//y el de la derecha.
int	ft_get_possibilities(int izq, int der)
{
	if (izq == 2 && der == 2)
	{
		return (6);
	}
	else if ((izq == 1 && der == 4) || (izq == 4 && der == 1))
	{
		return (1);
	}
	else if ((izq == 1 && der == 2) || (izq == 2 && der == 1))
	{
		return (2);
	}
	return (3);
}

//Generar una lista de filas con las posibilidades de cada vista
int	*ft_rows_possibilities(int *nbrs)
{
	static int	rows[4];

	rows[0] = ft_get_possibilities(nbrs[8], nbrs[12]);
	rows[1] = ft_get_possibilities(nbrs[9], nbrs[13]);
	rows[2] = ft_get_possibilities(nbrs[10], nbrs[14]);
	rows[3] = ft_get_possibilities(nbrs[11], nbrs[15]);
	return (rows);
}

//Generar una lista de columnas con las posibilidades de cada vista
int	*ft_cols_possibilities(int *nbrs)
{
	static int	cols[4];

	cols[0] = ft_get_possibilities(nbrs[0], nbrs[4]);
	cols[1] = ft_get_possibilities(nbrs[1], nbrs[5]);
	cols[2] = ft_get_possibilities(nbrs[2], nbrs[6]);
	cols[3] = ft_get_possibilities(nbrs[3], nbrs[7]);
	return (cols);
}

int	ft_es_correcto(int num, int *nbrs, int pos, int der)
{
	int	*possibilities;
	int	correcto;
	int	index;

	possibilities = ft_cols_possibilities(nbrs);
	index = 0;
	correcto = 0;
	while (index < possibilities[pos])
	{
		if (ft_get_row(index, nbrs[pos], nbrs[der]) == num)
		{
			return (1);
		}
		index++;
	}
	return (0);
}
