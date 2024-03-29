/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 19:23:01 by dlee              #+#    #+#             */
/*   Updated: 2016/12/04 19:46:37 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd(('0' + (n % 10)), fd);
	}
	else if (n < 10 && n >= 0)
	{
		ft_putchar_fd(('0' + n), fd);
	}
	else if (n == -2147483648)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd('8', fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((-n), fd);
	}
}
