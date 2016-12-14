/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:57:07 by dlee              #+#    #+#             */
/*   Updated: 2016/12/06 13:32:40 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	char	*res_tmp;

	if (!s1 || !s2 || !(res = ft_strnew((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	res_tmp = &(res[ft_strlen(s1)]);
	res = ft_strcpy(res, s1);
	res_tmp = ft_strcpy(res_tmp, s2);
	return (res);
}
