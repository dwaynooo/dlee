/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 19:31:59 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 18:51:14 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s_tmp;
	char	*s_res;

	i = ft_strlen(s) - 1;
	s_tmp = (char *)s;
	s_res = NULL;
	while (*s_tmp != '\0')
	{
		if (*s_tmp == (unsigned char)c)
			s_res = s_tmp;
		s_tmp++;
	}
	if (c == '\0' && *s_tmp == '\0')
		s_res = s_tmp;
	return (s_res);
}
