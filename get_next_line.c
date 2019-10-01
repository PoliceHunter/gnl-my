/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:37:05 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/10/01 17:35:12 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*residue_check(char **residue, char **line, int fd)
{
	char *p;

	p = NULL;
	if (residue[fd])
	{
		if ((p = ft_strchr(residue[fd], '\n')))
		{
			*p = '\0';
			*line = ft_strdup(residue[fd]);
			ft_strcpy(residue[fd], ++p);
		}
		else
		{
			*line = ft_strdup(residue[fd]);
			ft_strclr(residue[fd]);
		}
	}
	else
		*line = ft_strnew(1);
	return (p);
}

int		get_next_line(const int fd, char **line)
{
	static char	*residue[255];
	int			bytes_read;
	char		*p;
	char		*tmp;
	char		buf[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	p = residue_check(residue, line, fd);
	while (!p && ((bytes_read = read(fd, buf, BUFF_SIZE))))
	{
		buf[bytes_read] = '\0';
		if ((p = ft_strchr(buf, '\n')))
		{
			*p = '\0';
			p++;
			free(residue[fd]);
			residue[fd] = ft_strdup(p);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buf);
		free(tmp);
	}
	return ((bytes_read || ft_strlen(residue[fd]) || ft_strlen(*line)) ? 1 : 0);
}
