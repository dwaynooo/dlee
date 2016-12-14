/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 19:35:44 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 18:37:50 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*src_dup;
	int		i;
	int		src_len;

	src_len = ft_strlen(src);
	if (!(src_dup = (char *)malloc(sizeof(char) * (src_len + 1))))
		return (NULL);
	src_dup[src_len] = '\0';
	i = 0;
	while (i < (src_len))
	{
		src_dup[i] = src[i];
		i++;
	}
	return (src_dup);
}
