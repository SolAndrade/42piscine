/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbengoec <pbengoec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:13:23 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/21 19:32:45 by pbengoec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

//OBTENEMOS LOS DATOS EN CASO DE QUE LA VISTA EMPIECE EN 1
int	ft_find_row_1(int pos, int der)
{
	if (der == 2)
	{
		if (pos == 0)
		{
			return (4123);
		}
		return (4213);
	}
	if (der == 3)
	{
		if (pos == 0)
		{
			return (4132);
		}
		else if (pos == 1)
		{
			return (4231);
		}
		return (4312);
	}
	return (4321);
}

//OBTENEMOS LOS DATOS EN CASO DE QUE LA VISTA EMPIECE EN 2
int	ft_find_row_2(int pos, int der)
{
	if (der == 3)
	{
		if (pos == 0)
		{
			return (1432);
		}
		else if (pos == 1)
		{
			return (2431);
		}
		return (3421);
	}
	if (der == 1)
	{
		if (pos == 0)
		{
			return (3214);
		}
		return (3124);
	}
	return (0);
}

//OBTENEMOS LOS DATOS EN CASO DE QUE LA VISTA EMPIECE EN 2 - 2
int	ft_find_row_2_2(int pos)
{
	if (pos == 0)
	{
		return (1423);
	}
	else if (pos == 1)
	{
		return (2413);
	}
	else if (pos == 2)
	{
		return (2143);
	}
	else if (pos == 3)
	{
		return (3241);
	}
	else if (pos == 4)
	{
		return (3412);
	}
	return (3142);
}

//OBTENEMOS LOS DATOS EN CASO DE QUE LA VISTA EMPIECE EN 3
int	ft_find_row_3(int pos, int der)
{
	if (der == 2)
	{
		if (pos == 0)
		{
			return (1342);
		}
		else if (pos == 1)
		{
			return (2341);
		}
		return (1243);
	}
	if (der == 1)
	{
		if (pos == 0)
		{
			return (2314);
		}
		else if (pos == 1)
		{
			return (1324);
		}
		return (2134);
	}
	return (0);
}

//VER EN QUE VISTA EMPIEZA EL LADO IZQUIERDO PARA DEVOLVERLES VALORES
int	ft_get_row(int pos, int izq, int der)
{
	if (izq == 1)
	{
		return (ft_find_row_1(pos, der));
	}
	if (izq == 3)
	{
		return (ft_find_row_3(pos,der));
	}
	if (izq == 2 && der != 2)
	{
		return (ft_find_row_2(pos, der));
	}
	if (izq == 2 && der == 2)
	{
		return (ft_find_row_2_2(pos));
	}
	return (1234);
}

int ft_es_correcto(int num, int *nbrs, int pos, int der)
{
	int *possibilities;
	int correcto;
	int index;

	possibilities = ft_cols_possibilities(nbrs);
	index = 0;
	correcto = 0;
	while(index < possibilities[pos]){
		// printf("POSIBILIDADES %d\n",ft_get_row(index,nbrs[pos],nbrs[der]));
		// printf("NÚMERO %d\n",num);
		if(ft_get_row(index,nbrs[pos],nbrs[der]) == num){
			return (1);
		}
		index++;
	}

	return (0);
}

int check_matrix(int *matrix, int *nbrs)
{
	int correcto;
	int n1;
	int n2;
	int n3;
	int n4;
	
	n1 = matrix[0]/1000*1000 + matrix[1]/1000*100 + matrix[2]/1000*10 + matrix[3]/1000;
	n2 = matrix[0]/100%10*1000 + matrix[1]/100%10*100 + matrix[2]/100%10*10 + matrix[3]/100%10;
	n3 = matrix[0]/10%10*1000 + matrix[1]/10%10*100 + matrix[2]/10%10*10 + matrix[3]/10%10;
	n4 = matrix[0]%10*1000 + matrix[1]%10*100 + matrix[2]%10*10 + matrix[3]%10;
	correcto = 0;
	if(ft_es_correcto(n1,nbrs,0,4)){
		if(ft_es_correcto(n2,nbrs,1,5)){
			if(ft_es_correcto(n3,nbrs,2,6)){
				if(ft_es_correcto(n4,nbrs,3,7)){
					return (1);
				}
			}
		}
	}
	return (0);
}

void ft_print_matrix(int *matrix)
{
	printf("%d\n",matrix[0]);
	printf("%d\n",matrix[1]);
	printf("%d\n",matrix[2]);
	printf("%d\n",matrix[3]);
	
}

int generate_matrix(int *possibilities, int *nbrs)
{
	int matrix[4];
	int indices[4];
	int sol;
	
	sol = 0;
	indices[0] = 0;
	while (indices[0] < possibilities[0])
	{
		indices[1] = 0;
		matrix[0] = ft_get_row(indices[0],nbrs[8],nbrs[12]);
		while (indices[1] < possibilities[1])
		{
			indices[2] = 0;
            matrix[1] = ft_get_row(indices[1],nbrs[9],nbrs[13]);
			while (indices[2] < possibilities[2])
			{
				indices[3] = 0;
                matrix[2] = ft_get_row(indices[2],nbrs[10],nbrs[14]);
				while (indices[3] < possibilities[3])
				{
                    matrix[3] = ft_get_row(indices[3],nbrs[11],nbrs[15]);
					sol = check_matrix(matrix, nbrs);
					if(sol == 1){
						ft_print_matrix(matrix);
						return (1);
					}
					indices[3]++;
				}
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
	int *possibilities;
	int solucion;

	possibilities = ft_rows_possibilities(nbrs);
	solucion = generate_matrix(possibilities, nbrs);
	if(solucion == 0){
		printf("NO SE PUEDE HACER");
	}

	return (0);
}