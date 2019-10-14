/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:40:44 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/10/14 17:55:29 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include "libft/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 32

struct					list_s
{
	void				*data;
	struct	list_s		*next;
	struct	list_s		*parent;
};

struct		rest_data
{
	int		fd;
	char	*rest;
};

int		get_next_line(const int fd, char **line);

#endif
