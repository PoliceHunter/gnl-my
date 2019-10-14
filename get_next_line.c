/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:37:05 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/10/14 17:55:14 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <string.h>

struct list_s	*push(struct list_s *parent, void *data)
{
	struct list_s *new_node = (struct list_s *)malloc(sizeof(struct list_s));
	new_node->data = data;
	new_node->next = NULL;
	new_node->parent = NULL;
	new_node->parent = parent;
	if (parent != NULL)
		parent->next = new_node;
	return (new_node);
}

struct list_s	*push_to_end(struct list_s *node, void *data)
{
	if (node == NULL)
	{
		struct list_s *new_node = (struct list_s *)malloc(sizeof(struct list_s));
		new_node->data = data;
		new_node->next = NULL;
		new_node->parent = NULL;
		return (new_node);
	}
	while (node->next != NULL)
		node = node->next;
	return (push(node, data));
}

void	*pop(struct list_s *node)
{
	void	*data;
	data = node->data;
	if (node->parent != NULL)
		node->parent->next = node->next;
	if (node->next != NULL)
		node->next->parent = node->parent;
	free(node);
	return (data);
}

char	pop_res(int fd, struct list_s *rest_cash)
{
	struct rest_data	*tmp;
	char				*ptr;
	char				*copy;

	while (rest_cash != NULL)
	{
		tmp = rest_cash->data;
		if (data->fd == fd)
		{
			tmp = pop(rest_cash);
			if ((ptr = ft_strchr((const char *)tmp, '\n')))
			{
				ft_strncpy(copy, ptr + 1, ft_strlen((const char *)tmp) - ((const char *)tmp - ptr));
				push_to_end(rest_cash, copy);
				*(ptr + 2) = '\0';
				free(ptr + 2);
			}
			return ((char)tmp);
		}
		rest_cash = rest_cash->next;
	}
	return ((char)(NULL));
}

int		get_next_line(const int fd, char **line)
{
	struct list_s	*rest_cash;
	int				bytes_read;
	char			*rest;
	char			*tmp;
	char			buf[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	rest = pop_res(fd, rest_cash);
	if (rest != NULL && ft_strchr(rest, '\n'))
	{
		*line = rest;
		return (0);
	}
	else if (rest == NULL)
		rest = "";
	while (bytes_read == read(fd, buf, BUFF_SIZE))
	{
		buf[bytes_read] = '\0';
		if ((tmp = ft_strchr(buf, '\n')))
		{
			*tmp = '\0';
			if ((tmp - buf) < BUFF_SIZE)
			{
				buf = (char *)ft_strjoin(rest, buf);
				push(rest_cash, tmp + 1);
			}
			else
				buf = ft_strjoin(rest, buf);
			return (0);
		}
	}
	return ((bytes_read || ft_strlen((const char *)rest_cash[fd]) || ft_strlen(*line)) ? 1 : 0);
}
