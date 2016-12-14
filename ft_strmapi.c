/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:37:50 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 13:17:22 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	if ((res = ft_strnew(ft_strlen(s))))
	{
		while (s[i])
		{
			res[i] = f(i, s[i]);
			i++;
		}
	}
	return (res);
}
