/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:44:43 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 13:17:50 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(const char *s, char (*f)(char))
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
			res[i] = f(s[i]);
			i++;
		}
	}
	return (res);
}
