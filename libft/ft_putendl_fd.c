/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:32:33 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/20 13:25:53 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int i;

	if (!s || !fd)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd((char)s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
