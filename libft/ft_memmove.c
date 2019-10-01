/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:13:01 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 16:07:00 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char		*ft_create_tmp(unsigned char *nsrc, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	if (!(tmp = (unsigned char *)malloc(sizeof(unsigned char) * n)))
		return (NULL);
	while (i != n)
	{
		tmp[i] = nsrc[i];
		i++;
	}
	return (tmp);
}

void						*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*nsrc;
	unsigned char	*ndst;
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	nsrc = (unsigned char *)src;
	ndst = (unsigned char *)dst;
	if (!nsrc && !ndst)
		return (0);
	if (nsrc < ndst && ndst < (nsrc + n))
		tmp = ft_create_tmp(nsrc, n);
	else
		tmp = nsrc;
	i = 0;
	while (i != n)
	{
		ndst[i] = tmp[i];
		i++;
	}
	return (dst);
}
