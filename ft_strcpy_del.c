/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 19:36:28 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 19:41:58 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy_del(char *dest, const char *src, char c)
{
	int		i;
	char	*dest_tmp;

	i = 0;
	dest_tmp = dest;
	while (src[0] != '\0' && src[0] != c)
	{
		dest_tmp[0] = src[0];
		dest_tmp++;
		src++;
	}
	dest_tmp[0] = '\0';
	return (dest);
}
