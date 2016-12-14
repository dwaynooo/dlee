/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:54:10 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 12:16:12 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	char	*haystack_tmp;
	int		i;

	i = 0;
	haystack_tmp = (char *)haystack;
	while (*haystack_tmp && i <= (int)(size - (size_t)ft_strlen(needle)))
	{
		if (ft_strncmp(haystack_tmp, needle, (size_t)ft_strlen(needle)) == 0)
			return (haystack_tmp);
		haystack_tmp++;
		i++;
	}
	return (NULL);
}
