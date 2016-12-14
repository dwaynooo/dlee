/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 18:45:33 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 18:16:09 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_tmp;
	unsigned char	*src_tmp;

	dest_tmp = (unsigned char *)dest;
	src_tmp = (unsigned char *)src;
	i = 0;
	while (i < n && src_tmp[i] != (unsigned char)c)
	{
		dest_tmp[i] = src_tmp[i];
		i++;
	}
	if (i < n && src_tmp[i] == (unsigned char)c)
	{
		dest_tmp[i] = src_tmp[i];
		return (dest + i + 1);
	}
	return (NULL);
}
