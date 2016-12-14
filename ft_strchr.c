/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 19:24:26 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 13:11:14 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_tmp;

	i = 0;
	s_tmp = (char *)s;
	while (*s_tmp != '\0' || c == '\0')
	{
		if (*s_tmp == (unsigned char)c)
			return (s_tmp);
		s_tmp++;
	}
	return (NULL);
}
