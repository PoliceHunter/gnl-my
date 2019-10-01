/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:36:55 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:53:53 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*tmp;

	len = ft_strlen(src);
	if (!(tmp = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	len = 0;
	while (src[len] != '\0')
	{
		tmp[len] = src[len];
		len++;
	}
	tmp[len] = '\0';
	return (tmp);
}
