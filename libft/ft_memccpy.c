/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:01:00 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:52:14 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ktr;

	ktr = (unsigned char *)src;
	ptr = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		ptr[i] = ktr[i];
		if (ktr[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
