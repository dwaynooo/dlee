/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:55:46 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 12:23:58 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*t_tmp;

	while (alst && (*alst)->next && del)
	{
		t_tmp = *alst;
		while ((t_tmp->next)->next != NULL)
			t_tmp = t_tmp->next;
		ft_lstdelone(&(t_tmp->next), del);
		t_tmp->next = NULL;
	}
	ft_lstdelone(&(*alst), del);
	*alst = NULL;
}
