/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:36:59 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/23 20:39:29 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	end;
	size_t	len;

	if (!s)
		return (NULL);
	begin = 0;
	end = ft_strlen(s);
	while (s[begin] == ' ' || s[begin] == '\t' || s[begin] == '\n')
		begin++;
	while ((begin < end) && (s[end - 1] == ' ' ||
				s[end - 1] == '\t' || s[end - 1] == '\n'))
		end--;
	if (begin == end)
		return (ft_strnew(1));
	len = end - begin;
	return (ft_strsub(s, begin, len));
}
