/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possibilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbengoec <pbengoec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:31:02 by pbengoec          #+#    #+#             */
/*   Updated: 2022/08/21 21:36:08 by pbengoec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		return (ft_find_row_3(pos, der));
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
