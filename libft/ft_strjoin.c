/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:48:06 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/10/01 18:03:17 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(tmp = (char *)malloc(sizeof(char) * ((ft_strlen((char *)s1))
		+ ft_strlen((char *)s2) + 1))))
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		tmp[i] = (char)s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		tmp[i] = (char)s2[j];
		j++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
