/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:11:58 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 18:44:35 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s[i] && i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(&(s[i])));
		i++;
	}
	return (NULL);
}
