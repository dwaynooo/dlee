/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 16:54:10 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 18:47:42 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t			i;
	char			*dest_tmp;
	unsigned int	len_src;

	i = 0;
	dest_tmp = dest;
	len_src = (unsigned int)ft_strlen(src);
	while (i < n && i < len_src)
	{
		if (!(*dest_tmp = *src))
			*dest_tmp = '\0';
		dest_tmp++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest_tmp = '\0';
		dest_tmp++;
		i++;
	}
	return (dest);
}
