/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 18:38:41 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 18:20:20 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_tmp;
	char	*src_tmp;

	dest_tmp = (char *)dest;
	src_tmp = (char *)src;
	if (dest > src)
	{
		src_tmp += n - 1;
		dest_tmp += n - 1;
		while (n > 0)
		{
			*dest_tmp = *src_tmp;
			dest_tmp--;
			src_tmp--;
			n--;
		}
	}
	else
		dest_tmp = ft_memcpy(dest_tmp, src, n);
	return (dest);
}
