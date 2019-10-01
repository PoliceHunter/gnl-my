/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:58:36 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 18:29:36 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < len && needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)&(haystack[i]));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
