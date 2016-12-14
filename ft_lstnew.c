/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:01:34 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 12:23:28 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *cont, size_t size)
{
	t_list	*t;

	if (!(t = (t_list *)malloc(sizeof(t_list))))
	{
		free(t);
		return (NULL);
	}
	if (cont != NULL)
	{
		t->content = ft_memalloc(size);
		t->content = ft_memcpy(t->content, cont, size);
		t->content_size = size;
	}
	else
	{
		t->content_size = 0;
		t->content = NULL;
	}
	t->next = NULL;
	return (t);
}
