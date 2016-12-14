/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 22:01:59 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 18:13:45 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_itoa_min(int n)
{
	int			i;
	char		*res;

	i = 10;
	if (!(res = (char *)malloc(sizeof(char) * (10 + 1 + 1))))
		return (NULL);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[i + 1] = '\0';
		n = (n + 1) * (-1);
		while (n > 0)
		{
			res[i] = '0' + (n % 10);
			i--;
			n = n / 10;
		}
		res[10] = '8';
	}
	return (res);
}

char			*ft_itoa(int n)
{
	int			i;
	char		*res;

	i = ft_intlen(n);
	if (n < 0)
		i++;
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	res[i] = '\0';
	if (n < 0 && n != -2147483648)
	{
		n = -n;
		res[0] = '-';
	}
	else if (n == -2147483648)
		return (ft_itoa_min(n));
	while (n > 0 || !(res[0]))
	{
		res[i - 1] = '0' + (n % 10);
		i--;
		n = n / 10;
	}
	return (res);
}
