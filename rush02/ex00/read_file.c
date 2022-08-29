/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soandrad <soandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:41:03 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/28 21:35:25 by soandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*ft_read_dict(char *file_name)
{
	char	*buf;
	int		fd;
	int		sz;
	char	*path;

	path = file_name;
	buf = (char *)malloc(691 * sizeof(char));
	fd = open(path, O_RDONLY);
	if (fd >= 0)
		sz = read(fd, buf, 691);
	return (buf);
}
