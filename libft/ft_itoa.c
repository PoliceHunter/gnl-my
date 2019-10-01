/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:56:01 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/23 19:00:59 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_len(long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*result;
	int		r_index;

	r_index = ft_len(n);
	if (!(result = (char*)malloc(sizeof(char) * (r_index + 1))))
		return (NULL);
	result[r_index--] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (n != 0)
	{
		if (n < 0)
		{
			result[0] = '-';
			result[r_index--] = '0' + -(n % 10);
		}
		else
			result[r_index--] = '0' + (n % 10);
		n /= 10;
	}
	return (result);
}
