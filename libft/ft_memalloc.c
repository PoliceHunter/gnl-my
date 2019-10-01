/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:37:00 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:05:28 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	if (size + 1 < size)
		return (NULL);
	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, size);
	return (mem);
}
