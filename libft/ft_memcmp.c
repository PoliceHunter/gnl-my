/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:10:44 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/11 20:14:20 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ktr;

	ptr = (unsigned char *)s1;
	ktr = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr != *ktr)
			return (*ptr - *ktr);
		ptr++;
		ktr++;
	}
	return (0);
}
