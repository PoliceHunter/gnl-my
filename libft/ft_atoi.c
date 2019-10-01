/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:10:42 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/24 14:19:11 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_is_symbol(char symbol)
{
	return (symbol == ' ' || symbol == '\t' || symbol == '\v'
			|| symbol == '\n' || symbol == '\r' || symbol == '\f'
			|| symbol == '\0');
}

static const char	*ft_trim_begin(const char *str)
{
	if (str == NULL)
		return (NULL);
	while (ft_is_symbol(*str))
		++str;
	return (str);
}

static int			ft_sign_check(char symbol)
{
	if (symbol == '-')
		return (-1);
	return (1);
}

int					ft_atoi(const char *str)
{
	long long	result;
	int			sig;
	int			index;

	index = 0;
	result = 0;
	sig = 1;
	str = ft_trim_begin(str);
	if (*str == '-' || *str == '+')
		sig = ft_sign_check(*str++);
	if (*str == '\0' || !ft_isdigit(*str))
		return (0);
	while (ft_isdigit(str[index]) && str[index] != '\0')
	{
		if ((sig == 1 && (result * 10 + (sig * (str[index] - '0')) < result)) ||
			(sig == -1 && (result * 10 + (sig * (str[index] - '0')) > result)))
		{
			if (sig == 1)
				return (-1);
			return (0);
		}
		result = result * 10 + (sig * (str[index] - '0'));
		index++;
	}
	return (result);
}
