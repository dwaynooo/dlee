/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:57:49 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 18:17:56 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (i < n)
	{
		if ((res = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) != 0)
			return (res);
		i++;
	}
	return (res);
}
