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

struct list_s 
{
	void * data;
	list_s * next;
	list_s * parent;
}

struct node
{
	int fd;
	char * rest;
}

list_s *  pop(list_s * list)
{
 // ToDO
}

char	*pop_rest(cont int fd, list_s* rest_ptr)
{
	while (rest != NULL)
	{
		struct node* data = (struct node*)rest->data;
		if (data == NULL)
		{
			return NULL;
		}

		if (data->fd == fd && data->rest != NULL)
		{
			char* rest = node->rest;
			if (ЕСЛИ ЕСТЬ ЕЩЕ \n)
			{
				 ВЕРНУТЬ ТОЛЬКО ЧАСТЬ И ВЫРЕЗАТЬ ЕЕ ИЗ rest
			}
			else
			{
				data->rest = NULL;
				pop(rest_ptr);
				return rest;
			}
		}

		rest = rest->next;
	}

	return NULL;
}

struct list {}

int		get_next_line(const int fd, char **line)
{
	static list_s * rest_cash; 
	int			bytes_read;
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
		//init rest if empty
	}

	while (bytes_read = read(fd, buf, BUFF_SIZE))
	{
		buf[bytes_read] = '\0';
		if ((tmp = ft_strchr(buf, '\n')) // find /0
		{
			*tmp = '\0';
			if (tmp - buf < BUFF_SIZE)
			{
				buf = ft_strjoin(rest, buf, tmp-buf);
				push(rest_cash, tmp+1);
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
