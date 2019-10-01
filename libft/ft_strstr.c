/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:11:32 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 16:00:43 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
			if (haystack[i + j] != needle[j] && haystack[i + j] + 1 == '\0')
				return (NULL);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
