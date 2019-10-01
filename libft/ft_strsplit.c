/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:48:59 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/23 17:59:26 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t			count_words(const char *s, char c)
{
	size_t index;
	size_t words;

	index = 0;
	words = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		while (s[index] != c && s[index] != '\0')
		{
			words++;
			while (s[index] != c && s[index] != '\0')
				index++;
		}
	}
	return (words);
}

static size_t			ft_len_word(const char *s, char c, size_t i)
{
	size_t len;

	len = i;
	while (i != 0)
	{
		i--;
		len--;
		if (s[i] == c)
			return (len + 1);
	}
	return (len);
}

char					**ft_strsplit(const char *s, char c)
{
	char	**ret;
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	if (s == NULL || !c
		|| !(ret = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	while (j < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		while (s[i] && (s[i] != c))
			i++;
		if (!(ret[j++] = ft_strsub(s, ft_len_word(s, c, i),
						i - ft_len_word(s, c, i))))
		{
			free(ret);
			return (NULL);
		}
	}
	ret[j] = 0;
	return (ret);
}
