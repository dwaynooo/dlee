/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstapp_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 20:49:22 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 12:23:42 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstapp_new(t_list **alst, t_list *new)
{
	t_list	*tmp;
	t_list	*new_tmp;

	new_tmp = ft_lstnew(new->content, new->content_size);
	if (alst && new)
	{
		tmp = *alst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_tmp;
		new->next = NULL;
	}
}
