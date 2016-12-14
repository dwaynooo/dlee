/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:45:26 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 13:27:18 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	i = 0;
	if (!(res = ft_strnew(len)))
		return (NULL);
	while (s && s[start + i] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
