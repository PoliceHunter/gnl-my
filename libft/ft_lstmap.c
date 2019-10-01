/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:21:22 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/09/24 19:37:41 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_lstfree(void *content, size_t content_size)
{
	(void)content_size;
	free(content);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *elem;
	t_list *tmp;
	t_list *head;

	tmp = NULL;
	head = NULL;
	if (f)
		while (lst)
		{
			if (!(elem = f(lst)))
			{
				if (head)
					ft_lstdel(&head, *ft_lstfree);
				return (NULL);
			}
			if (tmp)
				tmp->next = elem;
			else
				head = elem;
			lst = lst->next;
			tmp = elem;
		}
	return (head);
}
