/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 19:37:27 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 12:24:17 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_tmp;
	t_list	*res;
	t_list	*res_tmp;

	lst_tmp = lst;
	res = f(lst_tmp);
	lst_tmp = lst_tmp->next;
	while (lst_tmp != NULL)
	{
		res_tmp = f(lst_tmp);
		ft_lstapp_new(&res, res_tmp);
		lst_tmp = lst_tmp->next;
	}
	return (res);
}
