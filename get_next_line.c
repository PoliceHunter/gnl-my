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


struct rest_data
{
	int fd;
	char * rest;
}

char * pop_res(int fd, struct list_s * rest_cash)
{
	rest_data * tmp;
	char * result;
	char * ptr;

	while (rest_cash != NULL)
	{
		tmp = (rest_data*)rest_cash->data;
		if (data->fd == fd)
		{
			tmp = pop(rest_cash);
			if ((ptr = ft_strchr(tmp, '\n')))
			{
				ft_strncpy(copy, ptr + 1, ft_strlen(tmp) - (tmp - ptr));
				push_to_end(rest_cash, copy);
				*(ptr + 2) = '\0';
				free(ptr + 2); // ???  // free rest of tmp
			}

			return tmp;
		}

		rest_cash = rest_cash->next;
	}

	return NULL;
}

int		get_next_line(const int fd, char **line)
{
	static list_s * rest_cash; 
	int		bytes_read;
	char		*p;
	char		*tmp;
	char		buf[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);

	rest =  pop_rest(fd, rest_cash);
	
	if (rest != NULL && ft_strchr(rest, '\n'))
	{
		*line = rest;
		return;
	}
	else if (rest == NULL)
	{
		rest = "";
	}

	while (bytes_read = read(fd, buf, BUFF_SIZE))
	{
		buf[bytes_read] = '\0';
		if ((tmp = ft_strchr(buf, '\n')) // find /0
		{
			*tmp = '\0';
			if ((tmp - buf) < BUFF_SIZE)
			{
				buf = ft_strjoin(rest, buf, tmp-buf);
				push(rest_cash, tmp + 1);
			}
			else
			{
				buf = ft_strjoin(rest, buf);
			}
			return;
		}

	}
	return ((bytes_read || ft_strlen(residue[fd]) || ft_strlen(*line)) ? 1 : 0);
}


int		get_next_line_v2(const int fd, char **line)
{
	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
}
