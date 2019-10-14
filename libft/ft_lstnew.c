/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:07:34 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/10/02 14:21:17 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *result;

	if ((result = (t_list *)ft_memalloc(sizeof(t_list))))
	{
		if (!content)
		{
			result->content = NULL;
			result->content_size = 0;
		}
		else
		{
			if (!(result->content = ft_memalloc(content_size)))
			{
				free(result);
				return (NULL);
			}
			ft_memcpy(result->content, content, content_size);
			result->content_size = content_size;
		}
		result->next = NULL;
	}
	return (result);
}
