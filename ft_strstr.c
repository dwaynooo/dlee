/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:29:24 by dlee              #+#    #+#             */
/*   Updated: 2016/12/05 20:35:32 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	char	*haystack_tmp;
	char	*needle_tmp;
	int		res;

	res = 1;
	haystack_tmp = (char *)haystack;
	needle_tmp = (char *)needle;
	if (*needle == '\0')
		return (haystack_tmp);
	while (*haystack_tmp != '\0')
	{
		if (ft_strncmp(haystack_tmp, needle, ft_strlen(needle)) == 0)
			res = 0;
		if (res == 0)
			return (haystack_tmp);
		haystack_tmp++;
	}
	return (NULL);
}
