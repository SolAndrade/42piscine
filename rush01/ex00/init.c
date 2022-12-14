/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbengoec <pbengoec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:25:06 by pbengoec          #+#    #+#             */
/*   Updated: 2022/08/21 22:44:11 by pbengoec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_get_row(int pos, int izq, int der);
int		*ft_rows_possibilities(int *nbrs);
int		ft_es_correcto(int num, int *nbrs, int pos, int der);
void	ft_print_matrix(int *matrix);

int	check_matrix(int *matrix, int *nbrs)
{
	int	correcto;
	int	n1;
	int	n2;
	int	n3;
	int	n4;

	n1 = matrix[0] / 1000 * 1000;
	n1 = n1 + matrix[1] / 1000 * 100 + matrix[2] / 1000 * 10 + matrix[3] / 1000;
	n2 = matrix[0] / 100 % 10 * 1000 + matrix[1] / 100 % 10 * 100;
	n2 = n2 + matrix[2] / 100 % 10 * 10 + matrix[3] / 100 % 10;
	n3 = matrix[0] / 10 % 10 * 1000 + matrix[1] / 10 % 10 * 100;
	n3 = n3 + matrix[2] / 10 % 10 * 10 + matrix[3] / 10 % 10;
	n4 = matrix[0] % 10 * 1000;
	n4 = n4 + matrix[1] % 10 * 100 + matrix[2] % 10 * 10 + matrix[3] % 10;
	correcto = 0;
	if (ft_es_correcto(n1, nbrs, 0, 4))
		if (ft_es_correcto(n2, nbrs, 1, 5))
			if (ft_es_correcto(n3, nbrs, 2, 6))
				if (ft_es_correcto(n4, nbrs, 3, 7))
					return (1);
	return (0);
}

int	ft_check_last_row(int i, int p, int *matrix, int *nbrs)
{
	while (i < p)
	{
		matrix[3] = ft_get_row(i, nbrs[11], nbrs[15]);
		if (check_matrix(matrix, nbrs) == 1)
		{
			ft_print_matrix(matrix);
			return (1);
		}
		i++;
	}
	return (0);
}

int	generate_matrix(int *possibilities, int *nbrs)
{
	int	matrix[4];
	int	indices[4];

	indices[0] = 0;
	while (indices[0] < possibilities[0])
	{
		indices[1] = 0;
		matrix[0] = ft_get_row(indices[0], nbrs[8], nbrs[12]);
		while (indices[1] < possibilities[1])
		{
			indices[2] = 0;
			matrix[1] = ft_get_row(indices[1], nbrs[9], nbrs[13]);
			while (indices[2] < possibilities[2])
			{
				indices[3] = 0;
				matrix[2] = ft_get_row(indices[2], nbrs[10], nbrs[14]);
				ft_check_last_row(indices[3], possibilities[3], matrix, nbrs);
				indices[2]++;
			}
			indices[1]++;
		}
		indices[0]++;
	}
	return (0);
}

int	*ft_init(int *nbrs)
{
	int	*possibilities;
	int	solucion;

	possibilities = ft_rows_possibilities(nbrs);
	solucion = generate_matrix(possibilities, nbrs);
	return (0);
}
