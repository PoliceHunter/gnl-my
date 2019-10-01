/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:03:02 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:54:52 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int i;
	int j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0')
	{
		dst[i + j] = src[j];
		j += 1;
	}
	dst[i + j] = '\0';
	return (dst);
}
