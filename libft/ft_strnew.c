/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:53:45 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:05:14 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void *mem;

	if (size + 1 < size)
		return (NULL);
	if (!(mem = (char*)malloc(size + 1)))
		return (NULL);
	if (!(ft_memset(mem, '\0', size + 1)))
		return (NULL);
	return (mem);
}
