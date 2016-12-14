/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 15:03:36 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 13:09:48 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	int		i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}