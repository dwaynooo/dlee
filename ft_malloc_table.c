/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 19:41:06 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 19:44:12 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_lenword_del(const char *s, char c)
{
	int				res;

	res = 0;
	while (s && s[0] != '\0' && s[0] != c)
	{
		s++;
		res++;
	}
	return (res);
}

static int			ft_countword_del(const char *s, char c)
{
	int				res;

	res = 0;
	while (s[0] != '\0')
	{
		while ((s[0] == c && s[1] == c) || (s[0] == c && s[1] == '\0'))
			s++;
		if ((s[0] == c && s[1] != c) || (s[0] != c && s[0] != '\0'))
		{
			res++;
			s++;
		}
		while (s[0] != c && s[0] != '\0')
			s++;
	}
	return (res);
}

char				**ft_malloc_table(const char *s, char c)
{
	unsigned int	i;
	unsigned int	i_res;
	char			**res;

	i = 0;
	i_res = 0;
	if (!(res = (char **)malloc(sizeof(char*) * (ft_countword_del(s, c) + 1))))
		return (NULL);
	res[ft_countword_del(s, c)] = (void *)0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			res[i_res] = ft_strnew(ft_lenword_del(&(s[i]), c));
			i += ft_lenword_del(&(s[i]), c);
			i_res++;
		}
	}
	return (res);
}
