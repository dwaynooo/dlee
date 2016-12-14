/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 21:05:39 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 12:22:39 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	gap;
	unsigned int	i_src;
	unsigned int	i_dest;
	unsigned int	i_dest_tmp;

	i_src = 0;
	i_dest = (unsigned int)ft_strlen(dest);
	i_dest_tmp = (unsigned int)ft_strlen(dest);
	gap = (int)(size - (i_dest + 1));
	if (size <= i_dest + 1)
	{
		return (size + ft_strlen(src));
	}
	else
	{
		while (i_src < gap && src[i_src])
		{
			dest[i_dest] = src[i_src];
			i_src++;
			i_dest++;
		}
		dest[i_dest] = '\0';
		return (ft_strlen(src) + i_dest_tmp);
	}
}
