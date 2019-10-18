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

int		get_next_line(const int fd, char ** line)
{
	int len;
	char * ptr;
	int bytes_read;
	int capacity;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);

	*line = (char*)malloc(sizeof(char) * BUFF_SIZE);
	capacity = BUFF_SIZE;
	ptr = *line;
	len = 0;

	while (bytes_read == read(fd, ptr, 1))
	{
		if (bytes_read == 0 || *ptr == '\n' || *ptr == '\0')
		{
			*ptr = '\0';
			return len; // Считать ли символ \0 и \n считанным символом? Если да, то тут len + 1
		}

		ptr++;

		if (++len == capacity) // Тут происходит релокация памяти, на случай если мы превыщаем BUFF_SIZE. 
		{
			char * tmp = (char*)malloc(sizeof(char) * len * 2);
			ft_strncpy(tmp, *line, len);
			free(*line);
			*line = tmp;
			capacity *= 2;
		}
	}

	*line[len + 1] = '\0';
	return len;
}
