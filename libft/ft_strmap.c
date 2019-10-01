/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:19:07 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:01:27 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		tmp[i] = (*f)(s[i]);
		i++;
	}
	return (tmp);
}
