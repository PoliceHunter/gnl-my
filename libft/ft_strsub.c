/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:08:03 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:11:41 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	if (s == NULL || len + 1 < len)
		return (NULL);
	i = 0;
	if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = len + start;
	while (start != len)
	{
		tmp[i] = s[start];
		i++;
		start++;
	}
	tmp[i] = '\0';
	if (start == len)
		return (tmp);
	return (NULL);
}
