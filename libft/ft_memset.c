/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:46:02 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 15:51:59 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	if (!ptr && !c && !n)
		return (NULL);
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}
