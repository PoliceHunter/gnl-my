/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:45:24 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:01:32 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tmp;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(tmp = ft_strnew(ft_strlen((char *)s))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = (*f)(i, s[i]);
		i++;
	}
	return (tmp);
}
