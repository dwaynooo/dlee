/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 20:52:56 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 13:36:52 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(const char *s)
{
	char			*res;
	unsigned int	i;
	char			*t;

	if (!s)
		return (NULL);
	t = (char *)s;
	i = 0;
	if (*t)
	{
		while (*t == ' ' || *t == '\n' || *t == '\t')
			t++;
		i = ft_strlen(t);
		while (i > 0 && (t[i - 1] == 32 || t[i - 1] == 9 || t[i - 1] == 10))
			i--;
	}
	if (!(res = ft_strnew(i)))
		return (NULL);
	res = ft_strncpy(res, t, i);
	return (res);
}
