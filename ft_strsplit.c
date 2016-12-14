/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:26:05 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 13:30:04 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(const char *s, char c)
{
	char	*s_tmp;
	char	**dest;
	char	**dest_tmp;
	int		i_dest;

	i_dest = 0;
	if (!s || !c || !(dest = ft_malloc_table(s, c)))
		return (NULL);
	dest_tmp = dest;
	s_tmp = (char *)s;
	while (s_tmp[0] != '\0')
	{
		while (s_tmp[0] == c)
			s_tmp++;
		if (s_tmp[0] != c && s_tmp[0] != '\0')
		{
			dest_tmp[i_dest] = ft_strcpy_del(dest_tmp[i_dest], s_tmp, c);
			i_dest++;
		}
		while (s_tmp[0] != c && s_tmp[0] != '\0')
			s_tmp++;
	}
	dest_tmp[i_dest] = (void *)0;
	return (dest);
}
