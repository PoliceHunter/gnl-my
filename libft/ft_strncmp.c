/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:34:30 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/21 18:22:32 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t i;

	i = 0;
	if (!num)
		return (0);
	while ((str1[i] == str2[i]) && (--num))
	{
		if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
			return (str1[i] - str2[i]);
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
